#include <stdio.h>

int main() {
  int guess, secret_number = 7;

  do {
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);
  } while (guess != secret_number); // Loop continues until guess is correct

  printf("You guessed the secret number!\n");

  return 0;
}
