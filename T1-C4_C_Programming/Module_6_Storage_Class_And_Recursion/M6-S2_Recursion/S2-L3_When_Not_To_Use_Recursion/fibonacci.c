#include <stdio.h>

int fib(int n) {
  if (n == 1 | n == 0) {
    return 1;
  }
  else {
    return fib(n-1) + fib(n-2);
  }
}

int main(void) {
  printf("Type a number and hit ENTER to find its fibonacci equivalent: ");
  int n;
  scanf("%d", &n);
  printf("The fibonacci equivalent of the number %d is %d.\n", n, fib(n));
}