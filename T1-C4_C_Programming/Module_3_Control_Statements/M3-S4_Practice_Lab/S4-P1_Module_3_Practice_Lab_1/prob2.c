#include <stdio.h>
int main(void) {
  int num1, num2, num3;
  printf("Type your first number and hit ENTER: ");
  scanf("%d", &num1);
  printf("Type your second number and hit ENTER: ");
  scanf("%d", &num2);
  printf("Type your third number and hit ENTER: ");
  scanf("%d", &num3);
  if (num1 > num2 && num1 > num3) {
    printf("The largest number of the three is %d.\n", num1);
  }
  else if (num2 > num1 && num2 > num3) {
    printf("The largest of the three numbers is %d.\n", num2);
  }
  else if (num3 > num1 && num3 > num2) {
    printf("The largest of the three numbers is %d.\n", num3);
  }
  else {
    printf("There was an error in finding the largest number.\n");
  }

  if (num1 < num2 && num1 < num3) {
    printf("The smallest of the three numbers is %d.\n", num1);
  }
  else if (num2 < num3 && num2 < num1) {
    printf("The smallest of the three numbers is %d.\n", num2);
  }
  else if (num3 < num1 && num3 < num1) {
    printf("The smallest of the three numbers is %d.\n", num3);
  }
  else {
    printf("There was an error finding the smallest number.\n");
  }

  return 0;
}