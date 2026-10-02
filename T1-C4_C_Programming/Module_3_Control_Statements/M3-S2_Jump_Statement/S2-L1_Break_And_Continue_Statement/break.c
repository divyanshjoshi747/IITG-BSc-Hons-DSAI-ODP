#include <stdio.h>
int main (void) {
  int num;
  while (1) {
    printf("Type a number that you want to check if it is positive and hit ENTER: ");
    scanf("%d", &num);
    if (num <= 0) {
      printf("I am not a positive number.\n");
      break;
    }
    else{
    printf("I am positive!\n");
    }
  }
  return 0;
}