#include <stdio.h>

int main(void) {
  float x = 12;
  float *y;
  y = &x;
  printf("%f\n", *y);
  *y = 270;
  printf("%f\n", x);
}