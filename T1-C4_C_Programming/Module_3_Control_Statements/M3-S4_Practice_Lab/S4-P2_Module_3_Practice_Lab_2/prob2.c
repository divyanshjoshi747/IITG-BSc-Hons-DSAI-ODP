#include <stdio.h>
int main(void) {
  int num1, num2, count, hcf = 0;
  printf("Type your first number and hit ENTER: ");
  scanf("%d", &num1);
  printf("Type your second number and hit ENTER: ");
  scanf("%d", &num2);
  int num = num1 > num2 ? num2 : num1;
  for (count = 2; count <= num; count++) {
    if (num1%count == 0 && num2%count == 0) {
      hcf = count;
    }
  }
  hcf = (hcf) ? hcf : 1;
  printf("The HCF of the two numbers that you've inputted is %d.\n", hcf);
  return 0;
}