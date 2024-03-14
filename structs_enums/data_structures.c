#include <stdio.h>

// Advanced Structure with Nested Structures and Pointers

typedef struct {
  int x;
  float y;
  struct {  // Nested structure to group related data
    char name[20];
    int age;
  } info;
} Person;

enum Color { RED, GREEN, BLUE }; // Advanced Enum with Custom Values

int main() {
  Person p1;
  p1.x = 10;
  p1.y = 3.14f;
  strcpy(p1.info.name, "John Doe");
  p1.info.age = 30;

  printf("Person details:\n");
  printf("  Coordinates: (%d, %.2f)\n", p1.x, p1.y);
  printf("  Name: %s\n", p1.info.name);
  printf("  Age: %d\n", p1.info.age);

  // Advanced Usage: Enum with switch statement
  enum Color favorite_color = BLUE;
  switch (favorite_color) {
    case RED:
      printf("Your favorite color is red!\n");
      break;
    case GREEN:
      printf("Your favorite color is green!\n");
      break;
    case BLUE:
      printf("Your favorite color is blue!\n");
      break;
    default:
      printf("Invalid color selection.\n");
  }

  return 0;
}
