#include <stdio.h>
#include <math.h> // For advanced math functions

// Single-line comment explaining the purpose of the function (advanced: concise)
double calculate_distance(double x1, double y1, double x2, double y2) {
  // Multi-line comment with detailed calculations (advanced: uses math library function)
  double dx = x2 - x1;
  double dy = y2 - y1;
  return sqrt(pow(dx, 2) + pow(dy, 2));
}

/**
 * @brief Calculates the angle between two points in degrees.
 *
 * This function takes the coordinates of two points and calculates the angle
 * between them in degrees using the arctangent function.
 *
 * @param x1 X-coordinate of the first point.
 * @param y1 Y-coordinate of the first point.
 * @param x2 X-coordinate of the second point.
 * @param y2 Y-coordinate of the second point.
 *
 * @return The angle between the two points in degrees.
 */
// Doxygen comment for comprehensive documentation (advanced: function prototype style)
double calculate_angle_degrees(double x1, double y1, double x2, double y2) {
  double angle_radians = atan2(y2 - y1, x2 - x1);
  return angle_radians * 180.0 / M_PI; // Convert radians to degrees
}

int main() {
  double x1 = 1.0, y1 = 2.0, x2 = 4.0, y2 = 5.0;

  double distance = calculate_distance(x1, y1, x2, y2);
  double angle_degrees = calculate_angle_degrees(x1, y1, x2, y2);

  printf("Distance between points: %.2f\n", distance);
  printf("Angle between points: %.2f degrees\n", angle_degrees);

  return 0;
}
