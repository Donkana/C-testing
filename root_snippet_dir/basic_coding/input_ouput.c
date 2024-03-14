#include <stdio.h>

int main() {
  int age;
  char name[50];

  printf("Enter your name: ");
  scanf("%s", name); // Read a string using scanf

  printf("Enter your age: ");
  scanf("%d", &age);  // Read an integer using scanf with address

  printf("Hello, %s! You are %d years old.\n", name, age);

  return 0;
}
