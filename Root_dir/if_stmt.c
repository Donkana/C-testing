#include <stdio.h>

int main() {
  int grade = 85;

  if (grade >= 90) {
    printf("Excellent!\n");
  } else if (grade >= 80) {
    printf("Very good!\n");
  } else if (grade >= 70) {
    printf("Good job!\n");
  } else {
    printf("You can do better.\n");
  }

  return 0;
}
