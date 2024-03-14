#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1); // Recursive call
  }
}

int main() {
  int num = 5;
  int result = factorial(num);
  printf("Factorial of %d: %d\n", num, result);

  return 0;
}
