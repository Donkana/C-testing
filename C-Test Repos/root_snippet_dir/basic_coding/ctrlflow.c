#include <stdio.h>

int main() {
  int grade = 80;

  if (grade >= 90) {
    printf("Excellent!\n");
  } else if (grade >= 80) {
    printf("Very good!\n");
  } else if (grade >= 70) {
    printf("Good job!\n");
  } else {
    printf("You can do better.\n");
  }

  for (int i = 1; i <= 5; i++) {
    printf("Iteration: %d\n", i);
  }

  int x = 0;
  while (x < 3) {
    printf("Loop counter: %d\n", x);
    x++;
  }

  return 0;
}
