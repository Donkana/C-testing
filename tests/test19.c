#include <stdio.h>

struct Point {
  int x;
  double y;
};

int main() {
  struct Point p1 = {10, 2.5};

  printf("Point coordinates: (%d, %.2f)\n", p1.x, p1.y);

  return 0;
}
