#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void handle_error_and_exit(const char* message) {
  printf("Error: %s\n", message);
  exit(1); // Terminate program on error (more strict approach)
}

// Functions similar to previous example with simpler error handling using exit()

int main() {
  // ... (code similar to previous example, using handle_error_and_exit() on errors)

  return 0; // Only return 0 on successful execution
}
