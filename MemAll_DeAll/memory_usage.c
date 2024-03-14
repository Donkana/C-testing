#include <stdio.h>
#include <stdlib.h>

// Function to allocate a 2D array dynamically (advanced: takes dimensions)
int** allocate_2d_array(int rows, int cols) {
  int** arr = (int**)malloc(rows * sizeof(int*)); // Allocate row pointers
  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  for (int i = 0; i < rows; i++) {
    arr[i] = (int*)malloc(cols * sizeof(int)); // Allocate each row
    if (arr[i] == NULL) {
      printf("Memory allocation failed!\n");
      exit(1);
    }
  }
  return arr;
}

// Function to free a dynamically allocated 2D array (advanced: handles row pointers)
void free_2d_array(int** arr, int rows) {
  for (int i = 0; i < rows; i++) {
    free(arr[i]); // Free each row
  }
  free(arr); // Free the row pointer array
}

int main() {
  int rows = 3, cols = 4;

  // Allocate a 2D array dynamically
  int** matrix = allocate_2d_array(rows, cols);

  // Initialize the array (example)
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = i * cols +
