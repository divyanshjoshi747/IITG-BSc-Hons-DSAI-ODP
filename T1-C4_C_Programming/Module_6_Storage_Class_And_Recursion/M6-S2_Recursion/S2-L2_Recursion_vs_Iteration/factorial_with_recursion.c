#include <stdio.h>

long double factorial(int);

int main(void) {
  printf("Type a number and hit ENTER to find its factorial: ");
  int n;
  scanf("%d", &n);
  printf("The factorial of the number %d that you entered is %Lf.\n", n, factorial(n));
}

long double factorial(int n) {
  if (n < 0) {
    printf("Please enter a non-negative number.\n");
    return 0;
  }
  else if(n == 1 | n == 0) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}