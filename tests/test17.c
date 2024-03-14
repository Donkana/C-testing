#include <stdio.h>

int main() {
  int x = 10 + 2 * 3; // Incorrect precedence (multiplication before addition)

  printf("Value of x: %d (should be 16, but will be 14 due to precedence)\n", x);

  return 0;
}
