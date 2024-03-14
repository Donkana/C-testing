#include <stdio.h>
#include <stdint.h> // For standard integer types

#pragma pack(1) // Force 1-byte alignment (advanced: control packing)
union {
  uint32_t value;
  char bytes[sizeof(uint32_t)];
} endian_checker;

int main() {
  // Set a value in the union
  endian_checker.value = 0x01020304;

  // Check endianness based on byte order
  if (endian_checker.bytes[0] == 0x04) {
    printf("Little Endian System\n");
  } else if (endian_checker.bytes[3] == 0x04) {
    printf("Big Endian System\n");
  } else {
    printf("Endianness detection inconclusive.\n");
  }

  return 0;
}
