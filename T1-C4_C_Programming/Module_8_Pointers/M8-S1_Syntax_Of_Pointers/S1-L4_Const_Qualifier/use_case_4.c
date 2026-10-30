#include <stdio.h>

int main() {
  float PI = 3.14, num1;
  const float *const ptr1 = &PI;
  *ptr1 = 3.1416;
  ptr1 = &num1;
}