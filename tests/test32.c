#include <stdio.h>

int main() {
  int x = 0;

loop: // Label named "loop"

  if (x >= 5) {
    goto end; // Jump to the "end" label when x is 5 or more
  }

  printf("Value of x: %d\n", x);
  x++;
  goto loop; // Jump back to the beginning of the loop

end:  // Label named "end"
  printf("Loop finished.\n");

  return 0;
}
