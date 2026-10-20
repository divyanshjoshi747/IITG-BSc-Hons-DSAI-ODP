#include <stdio.h>
int f(void);
int f(void) {
  int cnt = 0;
  ++cnt;
  return (cnt);
}
int main(void) {
  printf("%d\n", f());
  printf("%d\n", f());
  printf("%d\n", f());
  return 0;
}