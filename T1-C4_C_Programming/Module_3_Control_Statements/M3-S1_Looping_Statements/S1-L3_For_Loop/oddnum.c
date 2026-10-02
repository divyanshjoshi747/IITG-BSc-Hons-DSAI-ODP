#include <stdio.h>
int main(void) {
  int num, n;
  printf("Type the number you want to get the odd numbers before and hit ENTER: ");
  scanf("%d", &num);
  for (n = 1; n <=num ; n+=2) {
    printf("%d\n", n);
  }
  return 0;
}