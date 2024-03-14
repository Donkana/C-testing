#include <stdio.h>

int main() {
  double pi = 3.14159;
  int x = (int) pi;  // Explicitly cast double to integer (truncates decimal part)

  printf("pi (double): %.2f, x (int after cast): %d\n", pi, x);

  return 0;
}
