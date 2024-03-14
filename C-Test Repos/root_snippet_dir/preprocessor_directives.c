#include <stdio.h>

#ifndef DEBUG  // Conditional compilation based on a macro
#define DEBUG 0  // Disable debug messages by default (change to 1 to enable)
#endif

#if DEBUG
#define PRINT_DEBUG(message) printf("DEBUG: %s\n", message)
#else
#define PRINT_DEBUG(message) /* Do nothing if debug is disabled */
#endif

int main() {
  int x = 10;

  PRINT_DEBUG("Initializing x to 10");

  // ... rest of your code

  return 0;
}
