#include <stdio.h>
#include <stdlib.h>

int main() {
  char message[] = "This is a message with variable length.";
  int len = strlen(message);
  FILE *fp = fopen("message.bin", "wb");

  if (fp == NULL) {
    perror("Error opening file");
    exit(1);
  }

  // Write the length of the message first
  fwrite(&len, sizeof(int), 1, fp);

  // Then write the actual message data
  fwrite(message, sizeof(char), len, fp);

  fclose(fp);
  return 0;
}
