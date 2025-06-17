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

  const int REPS = $2

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

  const int REPS = $2
  const int REPS_MULT = $3
    
  // warmup
  $CMDLP times $1

  // start
  unsigned long start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  $CMDLP times $2

  unsigned long end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  unsigned long total_cycles = end - start;

  printf("[LATENCY] Total cycles for %d: %lu\n", (REPS_MULT), total_cycles);
  printf("[LATENCY] Average cycles per instr: %.2f\n", (float)total_cycles / (REPS_MULT));
}

int main(void) {
  INIT_CHECK();
  enable_vec();

  TEST_CASE1();
  TEST_CASE2();

  EXIT_CHECK();
}
