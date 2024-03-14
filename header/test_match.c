#include <stdio.h>
#include "math_functions/math_utils.h" // Include the header file

int main() {
  int num1 = 5, num2 = 10;
  double val1 = 3.14, val2 = 2.7;

  int sum = add(num1, num2);
  double product = multiply(val1, val2);

  printf("Sum of %d and %d: %d\n", num1, num2, sum);
  printf("Product of %.2f and %.2f: %.2f\n", val1, val2, product);

  return 0;
}
