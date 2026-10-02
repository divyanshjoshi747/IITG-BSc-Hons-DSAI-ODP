#include <stdio.h>
int main(void) {
  int count, sum=0;
  for (count = 1; count <= 100; count++) {
    if (count % 3 == 0) {
      continue;
    }
    sum+=count;
  }
  printf("The sum of the numbers from 1 to 100, excluding multiples of 3, is %d.\n", sum);
  return 0;
}