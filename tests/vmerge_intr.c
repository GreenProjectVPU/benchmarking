#include <riscv_vector.h>
#include <stdio.h>

#define VL 64

void vmerge_benchmark() {
    float a[VL] __attribute__((aligned(32)));
    float b[VL] __attribute__((aligned(32)));
    float dst[VL] __attribute__((aligned(32))); 
    uint32_t mask[VL] __attribute__((aligned(32)));

    for (int i = 0; i < VL; i++) {
        a[i] = 1.0f;
        b[i] = 2.0f;
        mask[i] = i % 2;
    }

    size_t vl = __riscv_vsetvl_e32m1(VL);

    vfloat32m1_t va = __riscv_vle32_v_f32m1(a, vl);
    vfloat32m1_t vb = __riscv_vle32_v_f32m1(b, vl);

    vuint32m1_t mask_vec = __riscv_vle32_v_u32m1(mask, vl);
    vbool32_t vmask = __riscv_vmseq_vx_u32m1_b32(mask_vec, 1, vl);

    vfloat32m1_t merged = __riscv_vmerge_vvm_f32m1(va, vb, vmask, vl);

    __riscv_vse32_v_f32m1(dst, merged, vl);
}

int main() {
    vmerge_benchmark();
    printf("VMERGE benchmark completed.\n");
    return 0;
}
