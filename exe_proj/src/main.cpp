#include "public_module.h"
#include <stdio.h>

int main() {
  printf("PI = %f\n", PI);
#ifdef ENABLE_GREET
  greet();
#endif
}
