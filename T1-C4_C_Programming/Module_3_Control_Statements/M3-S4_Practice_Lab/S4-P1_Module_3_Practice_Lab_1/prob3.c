#include <stdio.h>
int main(void) {
  int num;
  printf("Type a number and hit ENTER to check if it is even or odd: ");
  scanf("%d", &num);
  if(num%2 == 0) {
    printf("The number you entered is even.\n");
  }
  else {
    printf("The number you entered is odd.\n");
  }
  return 0;
}