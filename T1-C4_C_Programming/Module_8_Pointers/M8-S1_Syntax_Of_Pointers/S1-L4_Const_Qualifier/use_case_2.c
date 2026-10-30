#include <stdio.h>

int main() {
  const float PI = 3.14;
  float *ptr1 = &PI;
  *ptr1 = 3.1416;
  printf("%.4f\n", *ptr1);
}