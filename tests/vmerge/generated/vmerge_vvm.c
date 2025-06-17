#include "vector_macros.h"
#include <stdio.h>

unsigned long read_cycles(void)
{
  unsigned long cycles;
  asm volatile ("rdcycle %0" : "=r" (cycles));
  return cycles;
}

void TEST_CASE1() {
  VSET(16, e32, m2);
VLOAD_32(v1, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483647, 14777216, 98765432, 123456789, 987654321);
VLOAD_32(v2, 4194304, 4434304, 524288, 99977216, 16777, 700000, 1048576, 500000, 524288, 700000, 13737316, 58388608, 77777716, 1600000, 9900000, 2097152);
VLOAD_32(v3, 32224432, 200, 99954432, 400, 1200000, 600, 1100000, 800, 900, 1000, 900000, 4194304, 1300, 2097152, 1500, 1600);
VLOAD_32(v4, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000, 1100000, 1200000, 1300000, 1400000, 1500000, 1600000);
VLOAD_32(v5, 1600000, 1500000, 1400000, 1300000, 1200000, 1100000, 1000000, 900000, 800000, 700000, 600000, 500000, 400000, 300000, 200000, 100000);
VLOAD_32(v6, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432);
VLOAD_32(v0, 0xAAAAAAAA, 0x55555555);


  const int REPS = 10000;
  const int REALREPS = 10000;

  // warmup
  asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				


  //###===== CASCADE OF COMMANDS =====###

  // start
  unsigned long start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
asm volatile("vmerge.vvm v3, v1, v2, v0");
				


  unsigned long end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  unsigned long total_cycles = end - start;

  printf("[SEQ] Total cycles for %d: %lu\n", REALREPS, total_cycles);
  printf("[SEQ] Average cycles per instr: %.2f\n", (float)total_cycles / REALREPS);

  //###===== BIG BEAUTIFUL LOOP =====###

  // start
  start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  for(int i = 0; i < 10000; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}


  end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  total_cycles = end - start;

  printf("[1 LOOP] Total cycles for %d: %lu\n", REALREPS, total_cycles);
  printf("[1 LOOP] Average cycles per instr: %.2f\n", (float)total_cycles / REALREPS);

  //###===== INTO SMALL LOOP =====###

  // start
  start = 0;
  asm volatile("rdcycle %0" : "=r" (start));

  for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
for(int i = 0; i < 100.0; i++) {
asm volatile("vmerge.vvm v3, v1, v2, v0");
				
}
 

  end = 0;
  asm volatile("rdcycle %0" : "=r" (end));

  total_cycles = end - start;

  printf("[LOOPS] Total cycles for %d: %lu\n", REALREPS, total_cycles);
  printf("[LOOPS] Average cycles per instr: %.2f\n", (float)total_cycles / REALREPS);
}

int main(void) {
  INIT_CHECK();
  enable_vec();

  TEST_CASE1();
//  TEST_CASE2();

  EXIT_CHECK();
}
