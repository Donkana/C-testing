#include <stdio.h>

int main() {
  unsigned int num1 = 10; // 1010 in binary (unsigned to avoid negative values)
  unsigned int num2 = 13; // 1101 in binary

  // Bitwise AND (&)
  unsigned int result_and = num1 & num2;  // 1000 (8) - keeps common 1 bits
  printf("Bitwise AND (num1 & num2): %u (%d in decimal)\n", result_and, result_and);

  // Bitwise OR (|)
  unsigned int result_or = num1 | num2;   // 1111 (15) - sets any 1 bit
  printf("Bitwise OR (num1 | num2): %u (%d in decimal)\n", result_or, result_or);

  // Bitwise XOR (^)
  unsigned int result_xor = num1 ^ num2;  // 0111 (7) - sets bits that differ
  printf("Bitwise XOR (num1 ^ num2): %u (%d in decimal)\n", result_xor, result_xor);

  // Bitwise NOT (~) - one's complement (advanced: using a macro)
  #define BITWISE_NOT(x) (~x)
  unsigned int result_not = BITWISE_NOT(num1);  // 0101 (5) - inverts all bits
  printf("Bitwise NOT (~num1): %u (%d in decimal)\n", result_not, result_not);

  // Left shift (<<) - advanced: controlled by a variable
  int shift_amount = 2;
  unsigned int result_left_shift = num1 << shift_amount;  // 101000 (40) - shifts left
  printf("Left shift (num1 << %d): %u (%d in decimal)\n", shift_amount, result_left_shift, result_left_shift);

  // Right shift (>>) - advanced: unsigned right shift preserves sign bit
  unsigned int result_right_shift = num2 >> 1;  // 0110 (6) - shifts right (unsigned)
  printf("Right shift (num2 >> 1): %u (%d in decimal)\n", result_right_shift, result_right_shift);

  return 0;
}
