#include <stdio.h>
#include <math.h>

typedef struct {
  double distance;
  double angle;
} PolarCoordinates;

// Function pointer for different conversion calculations
typedef double (*ConversionFunction)(double, double);

// Function to calculate distance
double calculate_distance(double x, double y) {
  return sqrt(pow(x, 2) + pow(y, 2));
}

// Function to calculate angle (can be replaced with other functions)
double calculate_angle(double x, double y) {
  return atan2(y, x);
}

PolarCoordinates convert_using_function_pointer(double x, double y, ConversionFunction func) {
  PolarCoordinates result;
  result.distance = func(x, y);
  result.angle = calculate_angle(x, y); // Can be replaced with another angle calculation function
  return result;
}

int main() {
  double x = 3, y = 4;

  // Use different conversion functions through the function pointer
  ConversionFunction conversion_func1 = calculate_distance;
  PolarCoordinates polar_coords1 = convert_using_function_pointer(x, y, conversion_func1);
  printf("Distance-based conversion:\n");
  printf("  Distance: %.2f\n", polar_coords1.distance);
  printf("  Angle: %.2f degrees\n\n", polar_coords1.angle * 180 / M_PI);

  ConversionFunction conversion_func2 = calculate_angle;
  PolarCoordinates polar_coords2 = convert_using_function_pointer(x, y, conversion_func2);
  printf("Angle-based conversion:\n");
  printf("  Distance: assumed 1.0 (not calculated)\n");
  printf("  Angle: %.2f degrees\n", polar_coords2.angle * 180 / M_PI);

  return 0;
}
