#include <stdio.h>

int main() {
  int age = 25;
  int credit_score = 750;

  // Advanced usage of if-else with logical operators and nested conditionals
  if (age >= 18 && credit_score >= 700) {
    printf("You are eligible for a loan.\n");
    if (credit_score >= 800) {
      printf("You may qualify for special interest rates.\n");
    }
  } else {
    printf("You are not eligible for a loan at this time.\n");
  }

  return 0;
}
