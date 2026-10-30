#include <stdio.h>

int main(void) {
  int c = 12;
  float d = 3.14;
  int *a = &c;
  float *b = &d;
  void *ptr;
  ptr = a;
  printf("%d\n", *(int *) ptr);
  ptr = b;
  printf("%f\n", *(float *) ptr);
}