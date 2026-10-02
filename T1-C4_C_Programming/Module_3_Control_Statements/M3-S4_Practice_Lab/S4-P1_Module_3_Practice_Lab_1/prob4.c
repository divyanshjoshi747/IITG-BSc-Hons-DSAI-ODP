#include <stdio.h>
int main(void) {
  int n, num = 0;
  printf("Type a number and hit ENTER to get the number of digits present in that number: ");
  scanf("%d", &n);
  while(1) {
    n = n / 10;
    if (n < 1) {
      num++;
      break;
    }
    num++;
  }
  printf("The number of digits in the number which you've entered is %d.\n", num);
  return 0;
}