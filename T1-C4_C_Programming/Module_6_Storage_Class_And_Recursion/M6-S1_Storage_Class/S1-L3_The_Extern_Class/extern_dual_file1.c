#include <stdio.h>
#include "extrafile.h"
int a = 1, b = 2, c = 3;
int main(void) {
  printf("%d\n", f());
  printf("%d, %d, %d\n", a, b, c);
  return 0;
}