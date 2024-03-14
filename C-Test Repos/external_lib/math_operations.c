#include <stdio.h>
#include <math.h> // For advanced math functions

int main() {
  double x = 3.14, y = 2.72;

  // Using advanced math functions
  printf("Sine of %f: %.4f\n", x, sin(x));
  printf("Cosine of %f: %.4f\n", x, cos(x));
  printf("Tangent of %f: %.4f\n", x, tan(x));
  printf("Power of %f raised to %f: %.4f\n", x, y, pow(x, y));
  printf("Square root of %f: %.4f\n", y, sqrt(y));
  printf("Absolute value of %f: %.4f\n", -2.5, fabs(-2.5));
  printf("Ceiling of %f: %.0f\n", x, ceil(x));
  printf("Floor of %f: %.0f\n", x, floor(x));

  return 0;
}
