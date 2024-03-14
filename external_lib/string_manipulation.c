#include <stdio.h>
#include <string.h> // For string manipulation functions

int main() {
  char str1[] = "Hello, world!";
  char str2[20]; // Buffer for copied string

  // String length (advanced: using pointer arithmetic)
  int length = 0;
  while (str1[length] != '\0') {
    length++;
  }
  printf("Length of string '%s': %d\n", str1, length);

  // String copy (advanced: safer strncpy)
  strncpy(str2, str1, sizeof(str2) - 1); // Avoid buffer overflows
  str2[sizeof(str2) - 1] = '\0'; // Ensure null termination
  printf("Copied string: %s\n", str2);

  // String concatenation (advanced: safer strncat)
  strncat(str2, " - This is appended.", sizeof(str2) - strlen(str2) - 1); // Avoid buffer overflows
  printf("Concatenated string: %s\n", str2);

  // Search for a substring (advanced: using strstr)
  char* substring = strstr(str1, "world");
  if (substring != NULL) {
    printf("Substring 'world' found at index %d\n", (int)(substring - str1));
  } else {
    printf("Substring 'world' not found.\n");
  }

  return 0;
}
