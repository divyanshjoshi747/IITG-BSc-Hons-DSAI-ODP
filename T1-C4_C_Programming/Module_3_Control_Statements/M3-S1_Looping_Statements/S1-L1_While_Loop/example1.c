#include <stdio.h>
int main(void) {
  printf("Enter a number to get the output of all the number less than it: ");
  int num;
  scanf("%d", &num);
  int n = 1;
  printf("\n");
  while( n <= num) {
    printf("%d\n", n);
    n++;
  }
  return 0;
}