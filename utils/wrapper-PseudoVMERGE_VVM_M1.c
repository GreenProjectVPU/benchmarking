// Baremetal version of wrapper template for exegesis generated benchmarks.
// That file is meant to be processed by exegesis-gen.rb.

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <riscv_vector.h>

// scr-hal 'arch.h'
#include "arch.h"
// clang-format off
extern void foo(void *);

 

void testPseudoVMERGE_VVM_M1() {
  // Storage space for generated instructions to read/write to.
  char arr[128] = {0};
  char *arr_addr = arr;

  // Special hack, used for ld a0, 0(a0) sequences.
  memcpy(arr, &arr_addr, sizeof(arr_addr));
  size_t vl = __riscv_vsetvl_e8m1(16); // Required for RVV set up
  unsigned long start = arch_cycle(), fin;
  foo(arr);
  fin = arch_cycle();

#if defined(DETAILED)
  printf("start: %lx\n", start);
  printf("fin: %lx\n", fin);
#endif
  printf("PseudoVMERGE_VVM_M1: cycles elapsed: %ld\n", fin - start);
}
// clang-format on
