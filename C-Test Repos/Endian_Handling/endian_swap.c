#include <stdio.h>
#include <stdint.h>

void swap_bytes(uint16_t* value, int is_little_endian) {
  // Swap byte order if necessary
  if (is_little_endian != (sizeof(uint16_t) == 1)) {
    uint8_t* bytes = (uint8_t*)value;
    uint8_t temp = bytes[0];
    bytes[0] = bytes[1];
    bytes[1] = temp;
  }
}

int main() {
  uint16_t test_value = 0x1234; // Example value

  printf("Original value (before swap): 0x%04x\n", test_value);

  // Swap bytes if the system is little endian (optional usage)
  #ifdef LITTLE_ENDIAN // Define a preprocessor symbol for little endian
  swap_bytes(&test_value, 1);
  #endif

  printf("Swapped value (if necessary): 0x%04x\n", test_value);

  return 0;
}
