#include <stdio.h>

int main() {
  int x = 10;

  // Integer pointer
  int *ptr = &x;

  // Pointer to a pointer
  int **ptrptr = &ptr;

  // Array and pointer to array
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr_to_arr = arr;

  printf("Value of x: %d\n", x);
  printf("Value pointed to by ptr: %d\n", *ptr);
  printf("Value of ptrptr: %p (address of ptr)\n", ptrptr);
  printf("First element of arr using ptr_to_arr: %d\n", *ptr_to_arr);

  return 0;
}