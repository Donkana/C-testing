#include <stdio.h>

void swap_integers(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 5, b = 10;

  printf("Before swap: a = %d, b = %d\n", a, b);

  swap_integers(&a, &b);  // Pass addresses to swap values

  printf("After swap: a = %d, b = %d\n", a, b);

  return 0;
}
