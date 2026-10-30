#include <stdio.h>

int main(void) {
  printf("Type two numbers to find their sum, difference, product and quotient.\n");
  int c, d;
  int *p = &c, *q = &d;
  printf("Type the first number and hit ENTER: ");
  scanf("%d", p);
  printf("Type the second number and hit ENTER: ");
  scanf("%d", q);
  printf("The sum, difference, product and quotient is %d, %d, %d and %f.\n", *p+*q, *p-*q, *p*(*q), (float)*p/(*q));
}