#include <stdio.h>
#include <stdlib.h>

int main(void) {
  if (puts("Hello, World!\n") > 0) {
    return EXIT_SUCCESS;
  }
  return EXIT_FAILURE;
}
