#include <stdio.h>
int a = 1, b = 2, c = 3;
int f(void);
int f(void) {
  int b,c;
  a = b = c = 4;
  return (a+b+c);
}
int main(void) {
  printf("%d\n", f());
  printf("%d, %d, %d\n", a, b, c);
  return 0;
}