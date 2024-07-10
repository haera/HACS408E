#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include "asm.h"

int main(int argc, char *argv[]) {
  if (3 != argc) {
    printf("USAGE: %s <fizz> <buzz>", argv[0]);
    exit(1);
  }

  char *_pos = NULL;
  unsigned long x = strtoul(argv[1], &_pos, 0);
  if (0 != errno) {
    perror("strtoul()");
    exit(1);
  }
  
  unsigned long y = strtoul(argv[2], &_pos, 0);
  if (0 != errno) {
    perror("strtoul()");
    exit(1);
  }

  // Call your function here:
  fizzbuzz(x, y);

  return 0;
}
