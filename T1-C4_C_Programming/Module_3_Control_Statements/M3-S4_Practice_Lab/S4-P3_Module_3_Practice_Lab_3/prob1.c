#include <stdio.h>
int main(void) {
  int num1, num2, count;
  printf("Input two numbers to get the even numbers between them.\n");
  printf("Type first number and hit ENTER: ");
  scanf("%d", &num1);
  printf("Type the second number and hit ENTER: ");
  scanf("%d", &num2);
  for (count = num1 + 1; count < num2; count++) {
    if (count%2==0) {
      printf("%d\n", count);
    }
  }
  return 0;
}