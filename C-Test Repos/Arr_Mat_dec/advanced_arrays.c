#include <stdio.h>

// Function to print a 2D array
void print_array(int rows, int cols, int arr[][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

// Function to find the sum of elements in a 1D array
int sum_array(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  // 2D array declaration with initialization
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

  // Print the matrix
  printf("Matrix:\n");
  print_array(2, 3, matrix);

  // 1D array declaration and initialization
  int numbers[] = {10, 20, 30, 40};
  int size = sizeof(numbers) / sizeof(numbers[0]); // Get array size dynamically

  // Find the sum of the 1D array elements
  int total_sum = sum_array(numbers, size);
  printf("Sum of elements in the array: %d\n", total_sum);

  return 0;
}
