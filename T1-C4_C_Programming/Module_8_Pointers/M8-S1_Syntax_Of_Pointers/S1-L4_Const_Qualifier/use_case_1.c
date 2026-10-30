#include <stdio.h>

int main() {
  const float PI = 3.14;
  const float *ptr1 = &PI;
  *ptr1 = 3.1416;
}