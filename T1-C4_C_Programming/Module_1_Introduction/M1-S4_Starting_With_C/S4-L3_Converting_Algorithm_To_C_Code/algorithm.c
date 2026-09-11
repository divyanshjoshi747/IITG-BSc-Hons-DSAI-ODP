#include <stdio.h>
int main(void) {
  int value1, value2, max;
  printf("Please enter the first value: ");
  scanf("%d", &value1);
  printf("Please enter the second value: ");
  scanf("%d", &value2);
  if (value1 >= value2) {
    max = value1;
  }
  else {
    max = value2;
  }
  printf("The greater value is %d.\n", max);
  return 0;
}