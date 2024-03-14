#include <stdio.h>
#include <stdlib.h>

struct Product {
  int id;
  char name[50];
  double price;
};

int main() {
  struct Product product = {100, "Headphones", 49.99};
  FILE *fp = fopen("products.bin", "wb");

  if (fp == NULL) {
    perror("Error opening file");
    exit(1);
  }

  fwrite(&product, sizeof(struct Product), 1, fp); // Write the structure to the file

  fclose(fp);
  return 0;
}
