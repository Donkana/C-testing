#include <stdio.h>

void swap_using_references(int& x, int& y) {
  int temp = x; // No dereferencing needed with references
  x = y;
  y = temp;
}

int main() {
  int a = 5, b = 10;
  printf("Before swap: a = %d, b = %d\n", a, b);

  swap_using_references(a, b); // Pass variables by reference

  printf("After swap: a = %d, b = %d\n", a, b);

  return 0;
}
