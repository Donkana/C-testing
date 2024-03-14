#include <stdio.h>

int main() {
  // Advanced for loop with nested loop and loop variable modification
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  // Advanced for loop iterating over an array
  int numbers[] = {2, 4, 6, 8, 10};
  for (int num : numbers) { // Range-based for loop (C99 or later)
    printf("Number: %d\n", num);
  }

  return 0;
}
