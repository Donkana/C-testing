#include <stdio.h>

int main() {
  int grade = 85;

  // Advanced switch usage with multiple cases and fall-through
  switch (grade / 10) {
    case 9:
    case 10:
      printf("Excellent grade!\n");
      break;
    case 8:
      printf("Very good grade!\n");
      break;
    case 7:
      printf("Good grade.\n");
      break;
    default:
      printf("Could do better.\n");
  }

  return 0;
}
