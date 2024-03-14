#include <stdio.h>

int main() {
  // Different variable declaration styles with initialization
  int x = 10;
  double pi = 3.14159;
  char initial = 'A';

  // Declaration followed by initialization
  float temperature;
  temperature = 25.5;

  // Array declaration and initialization
  int numbers[5] = {1, 2, 3, 4, 5};

  printf("Variables:\n");
  printf("x (integer): %d\n", x);
  printf("pi (double): %.2f\n", pi);
  printf("initial (character): %c\n", initial);
  printf("temperature (float): %.1f\n", temperature);
  printf("Numbers array (first element): %d\n", numbers[0]);

  return 0;
}
