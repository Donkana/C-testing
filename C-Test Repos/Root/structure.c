#include <stdio.h>
#include <stdlib.h>

struct Person {
  int id;
  char name[50];
  double salary;
};

int main() {
  struct Person p1 = {101, "John Doe", 50000.0};
  FILE *fp = fopen("people.bin", "wb");

  if (fp == NULL) {
    perror("Error opening file");
    exit(1);
  }

  fwrite(&p1, sizeof(struct Person), 1, fp); // Write the structure to the file

  fclose(fp);
  return 0;
}
