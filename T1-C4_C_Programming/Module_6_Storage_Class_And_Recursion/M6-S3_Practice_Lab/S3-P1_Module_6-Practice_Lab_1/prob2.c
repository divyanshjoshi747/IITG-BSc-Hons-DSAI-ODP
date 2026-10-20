#include <stdio.h>
int retain_sum(int);

int main(void) {
  while(1) {
    printf("Type a number and hit ENTER to retain it's sum (Type 0 to stop): ");
    int n;
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    printf("The retained sum of the numbers you have entered till now is %d.\n", retain_sum(n));
  } 
}

int retain_sum(int n) {
  static int sum = 0;
  sum+=n;
  return sum;
}