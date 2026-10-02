#include <stdio.h>
int main(void) {
  int num;
  do {
  printf("Type a number to check if you've entered a positive number and hit ENTER: ");
  scanf("%d", &num);
  } while( num < 0);
  printf("You entered a positive number.\n");
  return 0;
}