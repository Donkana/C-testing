#include <stdio.h>

double add(int a, double b) {
  // Add the arguments and return the sum (double)
  return a + b;
}

int main() {
  int x = 5;
  double y = 3.14;

  // Call add function with x and y
  double sum = add(x, y);

  printf("Sum of %d and %f is: %f\n", x, y, sum);

  return 0;
}