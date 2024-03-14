#include <stdio.h>

typedef enum { RED, GREEN, BLUE } Color;  // Enum for color type

int main() {
  // Multiple variable declarations with initialization
  int x = 10;
  double pi = 3.14159;
  char initial = 'A';
  Color myColor = GREEN;

  printf("Values: x = %d, pi = %.2f, initial = %c, color = %d\n", x, pi, initial, myColor);

  return 0;
}
