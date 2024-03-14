#include <stdio.h>

int main() {
  int number = 1;

  // Advanced while loop with user input and break statement
  while (number > 0) {
    printf("Enter a positive number (0 to quit): ");
    scanf("%d", &number);

    if (number > 0) {
      printf("You entered: %d\n", number);
    }
  }

  return 0;
}
