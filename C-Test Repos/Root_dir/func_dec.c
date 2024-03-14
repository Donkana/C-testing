#include <stdio.h>

double calculate_area(int radius);  // Function prototype

int main() {
  int r = 5;
  double area = calculate_area(r);

  printf("Area of circle: %.2f\n", area);

  return 0;
}

double calculate_area(int radius) {
  return 3.14159 * radius * radius;
}
