#include <stdio.h>

// Function with no arguments and no return value (void function)
void print_hello() {
  printf("Hello from a void function!\n");
}

// Function with arguments and a return value (integer in this case)
int calculate_area(int length, int width) {
  return length * width;
}

// Function with a pointer argument (modifies the value pointed to)
void increment_by_one(int* x) {
  (*x)++; // Dereference the pointer to modify the value at the memory location
}

int main() {
  print_hello(); // Call the void function

  int area = calculate_area(5, 3); // Call the function with arguments and store the return value
  printf("Area of rectangle: %d\n", area);

  int number = 10;
  increment_by_one(&number); // Pass the address of 'number' to the function
  printf("Number after increment: %d\n", number);

  return 0;
}
