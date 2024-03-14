#include <stdio.h>
#include <math.h> // For advanced math functions

// Function with multiple return values (using a structure)
typedef struct {
  double distance;
  double angle;
} PolarCoordinates;

PolarCoordinates convert_to_polar(double x, double y) {
  PolarCoordinates result;
  result.distance = sqrt(pow(x, 2) + pow(y, 2)); // Using math library functions
  result.angle = atan2(y, x); // Advanced math function for arctangent
  return result;
}

int main() {
  double x = 3, y = 4;

  PolarCoordinates polar_coords = convert_to_polar(x, y);

  printf("Cartesian coordinates: (%f, %f)\n", x, y);
  printf("Polar coordinates: distance = %.2f, angle = %.2f degrees\n",
         polar_coords.distance, polar_coords.angle * 180 / M_PI); // Convert radians to degrees

  return 0;
}
