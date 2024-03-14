#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Custom error codes (advanced)
enum ErrorCode {
  SUCCESS = 0,
  FILE_OPEN_ERROR = 1,
  MEMORY_ALLOCATION_ERROR = 2,
  INVALID_INPUT_ERROR = 3,
};

// Function to open a file with error handling (advanced: custom error code)
int open_file(const char* filename, FILE** fp) {
  *fp = fopen(filename, "r");
  if (*fp == NULL) {
    printf("Error opening file: %s\n", filename);
    return FILE_OPEN_ERROR;
  }
  return SUCCESS;
}

// Function to read a specific number of integers from a file (advanced: input validation)
int read_integers_from_file(FILE* fp, int* arr, int size) {
  if (size <= 0) {
    printf("Invalid array size for reading.\n");
    return INVALID_INPUT_ERROR;
  }
  for (int i = 0; i < size; i++) {
    if (fscanf(fp, "%d", &arr[i]) != 1) {
      printf("Error reading from file: unexpected format.\n");
      return INVALID_INPUT_ERROR; // Or handle differently if data is missing
    }
  }
  return SUCCESS;
}

int main() {
  const char* filename = "data.txt";
  FILE* fp = NULL;
  int numbers[10]; // Array to store read integers

  // Open the file with error handling
  int error_code = open_file(filename, &fp);
  if (error_code != SUCCESS) {
    printf("Error: Failed to open file.\n");
    return error_code; // Propagate the error code
  }

  // Read integers from the file with input validation
  error_code = read_integers_from_file(fp, numbers, sizeof(numbers) / sizeof(numbers[0]));
  if (error_code != SUCCESS) {
    printf("Error: Failed to read data from file.\n");
    fclose(fp); // Close the file even on error
    return error_code;
  }

  // Process the read integers (example: print them)
  printf("Read integers from file:\n");
  for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  fclose(fp); // Close the file after successful operation

  return SUCCESS;
}
