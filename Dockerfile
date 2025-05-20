FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    git curl build-essential cmake ninja-build \
    autoconf automake autotools-dev libmpc-dev \
    libmpfr-dev libgmp-dev gawk bison flex texinfo \
    gperf libtool patchutils bc zlib1g-dev libexpat-dev \
    device-tree-compiler pkg-config \
    gcc-riscv64-unknown-elf \
    binutils-riscv64-unknown-elf && \
    rm -rf /var/lib/apt/lists/*

RUN git clone --depth 1 https://github.com/ucb-bar/chipyard.git /root/chipyard

RUN cd /root/chipyard && \
    git submodule update --init --recursive toolchains/riscv-tools/riscv-isa-sim

RUN cd /root/chipyard/toolchains/riscv-tools/riscv-isa-sim && \
    mkdir build && \
    cd build && \
    ../configure --prefix=/usr/local && \
    make -j$(nproc) && \
    make install

RUN mkdir -p /usr/riscv64-unknown-elf/include && \
    ln -s /usr/lib/gcc/riscv64-unknown-elf/*/include /usr/riscv64-unknown-elf/include

RUN curl -L -o miniconda.sh https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh && \
    bash miniconda.sh -b -p /opt/conda && \
    rm miniconda.sh
ENV PATH="/opt/conda/bin:${PATH}"
ENV RISCV=/opt/conda/envs/chipyard/riscv-tools

RUN conda init bash && \
    echo "conda activate chipyard" >> ~/.bashrc && \
    echo "export RISCV=${RISCV}" >> ~/.bashrc

RUN cd /root/chipyard && \
    ./scripts/build-setup.sh -s 7 -s 8 -s 9 && \
    echo "export RISCV=/opt/riscv" >> /etc/bash.bashrc && \
    echo "export PATH=$RISCV/bin:$PATH" >> /etc/bash.bashrc

WORKDIR /workspace
COPY . .
COPY ./tests .

RUN /bin/bash -c "\
    source /root/chipyard/env.sh && \
    cd /workspace && \
    make && \
    cd /root/chipyard/sims/verilator && \
    make CONFIG=GENV256D128ShuttleConfig LOADMEM=1 EXTRA_SIM_FLAGS=+cospike-printf=0 TIMEOUT_CYCLES=999999999999999999"

WORKDIR /root/chipyard/sims/verilator

CMD ["/bin/bash"]