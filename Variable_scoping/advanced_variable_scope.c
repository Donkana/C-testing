#include <stdio.h>

// Global variable (advanced: descriptive name)
int global_count = 0;

void outer_function() {
  // Local variable within the outer function (advanced: meaningful name)
  int outer_local_var = 10;

  // Accessing global variable from within a function
  global_count++;
  printf("Inside outer_function: global_count = %d, outer_local_var = %d\n", global_count, outer_local_var);

  inner_function(); // Call inner function
}

void inner_function() {
  // Local variable within the inner function (advanced: concise naming)
  int inner_var = 20;

  // Accessing outer local variable (not recommended, can lead to confusion)
  printf("Inside inner_function: outer_local_var = %d (not recommended practice)\n", outer_local_var);

  // Accessing global variable from within an inner function
  global_count++;
  printf("Inside inner_function: global_count = %d, inner_var = %d\n", global_count, inner_var);
}

int main() {
  printf("Initial global_count: %d\n", global_count);
  outer_function();
  printf("After outer_function call: global_count = %d\n", global_count);

  return 0;
}
