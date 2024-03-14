#include <stdio.h>

struct Student {
  int id;
  char name[50];
  double gpa;
};

int main() {
  struct Student john;  // Declare a student structure variable

  john.id = 12345;
  strcpy(john.name, "John Doe");
  john.gpa = 3.85;

  printf("Student Information:\n");
  printf("ID: %d\n", john.id);
  printf("Name: %s\n", john.name);
  printf("GPA: %.2f\n", john.gpa);

  return 0;
}
