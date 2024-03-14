#include <stdio.h>
#include <stdlib.h>

int main() {
  int numbers[] = {1, 5, 10, 15, 20};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  FILE *fp = fopen("numbers.bin", "wb");

  if (fp == NULL) {
    perror("Error opening file");
    exit(1);
  }

  fwrite(numbers, sizeof(int), size, fp); // Write the array to the file

  fclose(fp);
  return 0;
}
