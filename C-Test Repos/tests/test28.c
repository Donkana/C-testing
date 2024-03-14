#include <stdio.h>

int main() {
  int a = 5, b = 3;  // Binary: a = 0101, b = 0011

  int result = a ^ b; // Bitwise XOR (exclusive OR)
  printf("a ^ b = %d (Binary: %04d)\n", result, result);

  return 0;
}
