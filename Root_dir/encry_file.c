#include <stdio.h>
#include <stdlib.h>

char encrypt(char c, int key) {
  // Simple Caesar cipher (not secure) - Replace with a stronger algorithm for real encryption
  return c + key;
}

int main() {
  char message[] = "This is a secret message.";
  int key = 3;
  FILE *fp = fopen("encrypted.txt", "w"); // Encrypted text file (not binary)

  if (fp == NULL) {
    perror("Error opening file");
    exit(1);
  }

  for (int i = 0; message[i] != '\0'; i++) {
    fprintf(fp, "%c", encrypt(message[i], key));
  }

  fclose(fp);
  return 0;
}
