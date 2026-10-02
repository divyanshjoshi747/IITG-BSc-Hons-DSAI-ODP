#include <stdio.h>
int main (void) {
  int num, n = 1;
  printf("Type the number you want to get the numbers before and hit ENTER: ");
  scanf("%d", &num);
  do {
    printf("%d\n", n);
    n++;
  } while (num >= n);
  return 0;
}