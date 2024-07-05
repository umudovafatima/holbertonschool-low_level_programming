#include <stdio.h>
#include "main.h"
int main() {
    
    char *_memset(char *s, char b, unsigned int n) {
   // the first n bytes of the memory area
  for (unsigned int i = 0; i < n; i++) {
    // Assign the constant byte 'b' to the current memory location
    *(s + i) = b;
  }
  // Return the pointer to the starting memory area 's'
  return s;
    }
}
