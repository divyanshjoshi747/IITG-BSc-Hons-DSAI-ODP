#include <stdio.h>
int main(void) {
  printf("Type a number and hit ENTER to get it's ceiling and floor value: ");
  double num;
  scanf("%lf", &num);
  printf("The floor value of %lf is %ld and ceiling value of the same is %ld.\n", num, (long) num, ((long) num) + 1);
}