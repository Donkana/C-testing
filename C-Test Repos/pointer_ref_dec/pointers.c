#include <stdio.h>

void swap_using_pointers(int *x, int *y) {
  int temp = *x; // Dereference pointers to access and swap values
  *x = *y;
  *y = temp;
}

int main() {
  int a = 5, b = 10;
  printf("Before swap: a = %d, b = %d\n", a, b);

  swap_using_pointers(&a, &b); // Pass addresses of variables

  printf("After swap: a = %d, b = %d\n", a, b);

  return 0;
}
