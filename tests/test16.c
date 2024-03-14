#include <stdio.h>

int main() {
  // 'int' is a reserved keyword, cannot be used as a variable name
  int int = 10;  // This would cause a compiler error

  printf("This line wouldn't be reached due to the error above.\n"); 

  return 0;
}
