#include <stdio.h>
int main (void) {
  int num;
  while(1) {
    printf("Type the number that you want to check if it is positive, and then hit ENTER: ");
    scanf("%d", &num);
    if (num > 0) {
      printf("I am positive!\n");
    }
    else {
      continue;
    }
  }
}