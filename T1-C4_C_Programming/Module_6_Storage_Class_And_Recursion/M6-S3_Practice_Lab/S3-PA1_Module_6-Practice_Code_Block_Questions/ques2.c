  #include <stdio.h>

  unsigned factorial(unsigned);

  int main(void) {
    printf("Enter a non-negative integer:");
    int a;
    scanf("%d", &a);
    if (a < 0) {
      printf("Negative numbers do not have factorials.");
    }
    else {
      printf("Factorial = %d", factorial(a));
    }
  }

  unsigned factorial(unsigned n) {
    if (n == 1 | n == 0) {
      return n;
    }
    else {
      return n * factorial(n-1);
    }
  }