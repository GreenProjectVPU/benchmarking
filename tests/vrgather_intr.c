#include <riscv_vector.h>
#include <stdio.h>

#define VL 64

void vgather_benchmark() {
    float input[VL] __attribute__((aligned(32)));
    float result[VL] __attribute__((aligned(32)));
    uint32_t indices[VL] __attribute__((aligned(32)));

    for (int i = 0; i < VL; i++) {
        input[i] = (float)(i); 
        indices[i] = i;   
    }

    size_t vl = __riscv_vsetvl_e32m1(VL);
    

    vfloat32m1_t vb = __riscv_vle32_v_f32m1(input, vl);
    vuint32m1_t vindices = __riscv_vle32_v_u32m1(indices, vl);

    vfloat32m1_t gathered = __riscv_vrgather_vv_f32m1(vb, vindices, vl);

    __riscv_vse32_v_f32m1(result, gathered, vl);
}

int main() {
    vgather_benchmark();
    printf("VRGATHER benchmark completed.\n");
    return 0;
}