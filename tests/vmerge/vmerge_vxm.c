#include "vector_macros.h"
#include <stdio.h>
//#include "bench_macros.h"

unsigned long read_cycles(void)
{
  unsigned long cycles;
  asm volatile ("rdcycle %0" : "=r" (cycles));
  return cycles;
}

// THROUGHPUT
void TEST_CASE1() {
  const uint64_t scalar = 0x00000000deadbeef;

  VSET(16, e8, m1);
  VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
  VLOAD_8(v0, 0xAA, 0x55);

  const int REPS = 1000;

  // warmup
  for(int i = 0; i < 5; i++) {
    asm volatile("vmerge.vxm v3, v1, %[A], v0" ::[A] "r"(scalar));
  }

  // start
  unsigned long start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  #pragma GCC unroll 100
  for(int i = 0; i < REPS; i ++) {
    asm volatile("vmerge.vxm v3, v1, %[A], v0" ::[A] "r"(scalar));
  }

  unsigned long end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  unsigned long total_cycles = end - start;

  printf("[THROUGHPUT] Total cycles for %d vmerge.vxm: %lu\n", REPS, total_cycles);
  printf("[TRHOUGHPUT] Average cycles per vmerge.vxm: %.2f\n", (float)total_cycles / REPS);
}

// LATENCY
void TEST_CASE2() {
  const uint64_t scalar = 0x00000000deadbeef;

  VSET(16, e8, m1);
  VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
  VLOAD_8(v2, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
  VLOAD_8(v3, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
  VLOAD_8(v0, 0xAA, 0x55);

  const int REPS = 1000;

  // warmup
  for(int i = 0; i < 5; i++) {
    asm volatile("vmerge.vxm v3, v1, %[A], v0" ::[A] "r"(scalar));
  }

  // start
  unsigned long start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  #pragma GCC unroll 1000
  for(int i = 0; i < REPS; i ++) {
    asm volatile("vmerge.vxm v3, v3, %[A], v0" ::[A] "r"(scalar));
  }

  unsigned long end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  unsigned long total_cycles = end - start;

  printf("[LATENCY] Total cycles for %d vmerge.vxm: %lu\n", (REPS * 2), total_cycles);
  printf("[LATENCY] Average cycles per vmerge.vxm: %.2f\n", (float)total_cycles / (REPS * 2));
}

int main(void) {
  INIT_CHECK();
  enable_vec();

  TEST_CASE1();
  TEST_CASE2();

  EXIT_CHECK();
}
