#include <stdio.h>
int main(void) {
  int num1, num2, sum;
  printf("Enter the first value: ");
  scanf("%d", &num1);
  printf("Enter the second value: ");
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("The num of %d and %d is %d.\n", num1, num2, sum);
}