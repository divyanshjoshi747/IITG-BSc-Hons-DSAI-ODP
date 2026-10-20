#include <stdio.h>

long double factorial(int);

int main(void) {
  printf("Type a number and hit ENTER to get it's factorial:");
  int n;
  scanf("%d", &n);
  printf("The factorial of the number %d you entered is %Lf.\n", n, factorial(n));
}

long double factorial(int n) {
  if (n == 0) {
    return 1;
  }
  long double fact = 1;
  for (long double i = n; i > 1; i--) {
    fact = fact * i;
  }
  return fact;
}