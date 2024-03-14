#include <stdio.h>
#include "advanced_macros.h"

int main() {
  int num = 5;

  // Using the SQUARE macro
  int area = SQUARE(num);
  printf("Area of a square with side %d: %d\n", num, area);

  #ifdef DEBUG
  // Using the PRINT_DEBUG macro in debug mode
  PRINT_DEBUG("This is a debug message.");
  #endif

  return 0;
}
