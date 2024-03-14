#include <stdio.h>

#define EXPAND(x) x

int main() {
  int value = 10;

  // Print the macro expansion result (for educational purposes)
  printf("Macro expansion of EXPAND(value): %d\n", EXPAND(value));

  return 0;
}
