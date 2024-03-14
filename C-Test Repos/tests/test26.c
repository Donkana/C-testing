#include <stdio.h>

int main() {
  int x = 5, y = 10;
  int z = ++y;  // Pre-increment: y is incremented first, then assigned to z
  int w = x--;  // Post-decrement: x is assigned to w first, then decremented

  printf("Values: z = %d, w = %d, x = %d, y = %d\n", z, w, x, y);

  return 0;
}
