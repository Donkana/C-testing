#include <stdio.h>

int main() {
  int x = -5;
  int sign = (x > 0) ? 1 : 0;  // Ternary operator for conditional assignment

  printf("Sign of x (positive: 1, negative: 0): %d\n", sign);

  return 0;
}
