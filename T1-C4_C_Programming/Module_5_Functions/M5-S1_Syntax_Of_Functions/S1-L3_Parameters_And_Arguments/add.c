#include <stdio.h>
int add(int, int);
int add(int a, int b) {
  int sum;
  sum = a + b;
  return sum;
}
int main(void) {
  int a, b;
  printf("Type the first number and hit ENTER: ");
  scanf("%d", &a);
  printf("Type the second number and hit ENTER: ");
  scanf("%d", &b);
  printf("The sum of the numbers %d and %d entered by you is %d.\n", a, b, add(a, b));
  return 0;
}