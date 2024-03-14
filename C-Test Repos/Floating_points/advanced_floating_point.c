#include <stdio.h>
#include <math.h> // For advanced math functions (like pow)

int main() {
  // Sample floating-point numbers (advanced: descriptive names)
  double radius = 5.25;
  double pi = M_PI; // Using M_PI from math.h for accuracy

  // Area of a circle (advanced: combining operations)
  double area = pi * pow(radius, 2.0);
  printf("Area of a circle with radius %.2lf: %.2lf\n", radius, area);

  // Checking for floating-point equality (advanced: epsilon comparison)
  double expected_area = 84.65625; // Precalculated value for comparison
  double epsilon = 1e-6; // Tolerance for floating-point errors
  if (fabs(area - expected_area) < epsilon) {
    printf("Calculated area matches expected value within tolerance.\n");
  } else {
    printf("Calculated area may differ slightly due to floating-point precision limitations.\n");
  }

  // Advanced math function: exponential calculation
  double base = 2.718;
  double exponent = 3.14;
  double result_exp = pow(base, exponent);
  printf("e (%.2lf) raised to the power of %.2lf: %.4lf\n", base, exponent, result_exp);

  return 0;
}
