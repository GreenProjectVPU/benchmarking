#ifndef BENCH_MACROS_H
#define BENCH_MACROS_H

#include <stdio.h>

// creates a variable to store cpu cycles
#define TIM_START \
  unsigned long cycles = 0; \

// prints the count and resets it 
#define TIM_STOP \
  asm volatile ("rdcycle %0" : "=r" (cycles)); \
  printf("Measured cycles: %d\n", cycles);  \
  cycles = 0UL; \

#endif 
