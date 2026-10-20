#include <stdio.h>
int multiply(int, int);

int multiply(int x, int y) {
  x = x*y;
  return x;
}

int main(void) {
  int a,b,c;
  a = 5;
  b = 2;
  c = muliply(a, b);
  a = multiply(b, c);
  return 0;
}