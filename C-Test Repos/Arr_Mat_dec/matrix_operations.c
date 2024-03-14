#include <stdio.h>

// Function to add two matrices
void add_matrices(int rows, int cols, int A[][cols], int B[][cols], int C[][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

int main() {
  int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int matrix2[2][3] = {{7, 8, 9}, {10, 11, 12}};
  int result[2][3]; // To store the sum

  // Add the matrices
  add_matrices(2, 3, matrix1, matrix2, result);

  // Print the resulting matrix
  printf("Sum of matrices:\n");
  print_array(2, 3, result); // Reuse the print_array function

  return 0;
}
