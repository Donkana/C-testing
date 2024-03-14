#include <stdio.h>

int add(int x, int y) {
  return x + y;
}

double multiply(double x, double y) {
  return x * y;
}

// Function pointer declaration
typedef double (*Operation)(double, double);

double perform_operation(double a, double b, Operation op) {
  return op(a, b); // Call the function pointed to by the operation pointer
}

int main() {
  Operation operation = add; // Assign the address of 'add' to the operation pointer
  int result = operation(5, 3); // Call the function pointed to by the operation pointer (addition)
  printf("Sum: %d\n", result);

  operation = multiply; // Assign the address of 'multiply' to the operation pointer
  double product = perform_operation(3.14, 2.7, operation); // Call the function pointed to by the operation pointer (multiplication)
  printf("Product: %.2f\n", product);

  return 0;
}
