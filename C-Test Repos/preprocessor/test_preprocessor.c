#include <stdio.h>

#ifndef DEBUG  // Conditional compilation based on a macro
#define DEBUG 0  // Disable debug messages by default (change to 1 to enable)
#endif

#if DEBUG
#define PRINT_DEBUG(message) printf("DEBUG: %s\n", message)
#else
#define PRINT_DEBUG(message) /* Do nothing if debug is disabled */
#endif

void some_function(int x) {
  PRINT_DEBUG("Executing some_function with value:");
  PRINT_DEBUG(message);  // This line will cause an error if DEBUG is not defined
  printf("Value of x: %d\n", x);
}

int main() {
  int value = 10;

  #ifdef DEBUG  // Compile this block only if DEBUG is defined
  PRINT_DEBUG("Starting main function");
  #endif

  some_function(value);

  return 0;
}
