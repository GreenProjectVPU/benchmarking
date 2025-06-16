#include "vector_macros.h"
#include <stdio.h>

unsigned long read_cycles(void)
{
  unsigned long cycles;
  asm volatile ("rdcycle %0" : "=r" (cycles));
  return cycles;
}

// THROUGHPUT
void TEST_CASE1() {
  $SETUP

  // warmup
  $CMDTP times $1

  // start
  unsigned long start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  $CMDTP times $2

  unsigned long end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  unsigned long total_cycles = end - start;

  printf("[THROUGHPUT] Total cycles for %d: %lu\n", REPS, total_cycles);
  printf("[TRHOUGHPUT] Average cycles per instr: %.2f\n", (float)total_cycles / REPS);
}

// LATENCY
void TEST_CASE2() {
  $SETUP

  // warmup
  $CMDLP times $1

  // start
  unsigned long start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  $CMDLP times $2

  unsigned long end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  unsigned long total_cycles = end - start;

  printf("[LATENCY] Total cycles for %d: %lu\n", (REPS), total_cycles);
  printf("[LATENCY] Average cycles per instr: %.2f\n", (float)total_cycles / (REPS));
}

int main(void) {
  INIT_CHECK();
  enable_vec();

  TEST_CASE1();
//  TEST_CASE2();

  EXIT_CHECK();
}
