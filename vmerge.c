#include "vector_macros.h"
#include <stdio.h>
//#include "bench_macros.h"

// THROUGHPUT 
unsigned long read_cycles(void)
{
  unsigned long cycles;
  asm volatile ("rdcycle %0" : "=r" (cycles));
  return cycles;
}

void TEST_CASE1() {
  //TIM_START;
  VSET(16, e8, m1);
  VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
  VLOAD_8(v2, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
  VLOAD_8(v0, 0xAA, 0x55);
  
  const int REPS = 100;

  // warmup
  for(int i = 0; i < 5; i++) {
    asm volatile("vmerge.vvm v3, v1, v2, v0");
  }

  // start 
  unsigned long start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  for(int i = 0; i < REPS; i ++) {
    asm volatile("vmerge.vvm v3, v1, v2, v0");
  }

  unsigned long end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  unsigned long total_cycles = end - start;

  printf("[THROUGHPUT] Total cycles for %d vmerge.vvm: %lu\n", REPS, total_cycles);
  printf("[TRHOUGHPUT] Average cycles per vmerge.vvm: %.2f\n", (float)total_cycles / REPS);
}

// LATENCY 
void TEST_CASE2() {
  VSET(16, e8, m1);
  VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
  VLOAD_8(v2, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
  VLOAD_8(v0, 0xAA, 0x55);
  
  const int REPS = 100;

  // warmup
  for(int i = 0; i < 5; i++) {
    asm volatile("vmerge.vvm v3, v1, v2, v0");
  }

  // start 
  unsigned long start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  for(int i = 0; i < REPS; i ++) {
    asm volatile("vmerge.vvm v3, v1, v2, v0");
    asm volatile("vmerge.vvm v1, v3, v2, v0");
    asm volatile("vmerge.vvm v2, v1, v3, v0");
  }
  
  unsigned long end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  unsigned long total_cycles = end - start;

  printf("[LATENCY] Total cycles for %d vmerge.vvm: %lu\n", REPS, total_cycles);
  printf("[LATENCY] Average cycles per vmerge.vvm: %.2f\n", (float)total_cycles / REPS);
}

/*
void TEST_CASE3() {
  VSET(16, e8, m1);
  VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
  VLOAD_8(v0, 0xAA, 0x55);
  asm volatile("vmerge.vim v3, v1, -1, v0");
  VCMP_U8(9, v3, 1, 0xff, 3, 0xff, 5, 0xff, 7, 0xff, 0xff, 2, 0xff, 4, 0xff, 6,
          0xff, 8);

  VSET(16, e16, m1);
  VLOAD_16(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
  VLOAD_8(v0, 0xAA, 0x55);
  asm volatile("vmerge.vim v3, v1, -1, v0");
  VCMP_U16(10, v3, 1, 0xffff, 3, 0xffff, 5, 0xffff, 7, 0xffff, 0xffff, 2,
           0xffff, 4, 0xffff, 6, 0xffff, 8);

  VSET(16, e32, m1);
  VLOAD_32(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
  VLOAD_8(v0, 0xAA, 0x55);
  asm volatile("vmerge.vim v3, v1, -1, v0");
  VCMP_U32(11, v3, 1, 0xffffffff, 3, 0xffffffff, 5, 0xffffffff, 7, 0xffffffff,
           0xffffffff, 2, 0xffffffff, 4, 0xffffffff, 6, 0xffffffff, 8);

  VSET(16, e64, m1);
  VLOAD_64(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
  VLOAD_8(v0, 0xAA, 0x55);
  asm volatile("vmerge.vim v3, v1, -1, v0");
  VCMP_U64(12, v3, 1, 0xffffffffffffffff, 3, 0xffffffffffffffff, 5,
           0xffffffffffffffff, 7, 0xffffffffffffffff, 0xffffffffffffffff, 2,
           0xffffffffffffffff, 4, 0xffffffffffffffff, 6, 0xffffffffffffffff, 8);
}*/

int main(void) {
  INIT_CHECK();
  enable_vec();

  TEST_CASE1();
  TEST_CASE2();
  //TEST_CASE3();

  EXIT_CHECK();
}
