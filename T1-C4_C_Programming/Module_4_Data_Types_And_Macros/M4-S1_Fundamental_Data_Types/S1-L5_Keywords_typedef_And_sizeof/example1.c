#include <stdio.h>
int main(void) {
  int a, b;
  printf("char: %lu\n", sizeof(char));
  printf("int: %lu\n", sizeof(int)); 
  printf("expression: %lu\n", sizeof(a+b));
  printf("float: %lu\n", sizeof(float));
  printf("double: %lu\n", sizeof(double));
  printf("long double: %lu\n", sizeof(long double));
}