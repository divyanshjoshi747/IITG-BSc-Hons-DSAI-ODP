#include <stdio.h>
int main(void) {
  int n, num, count, min, max;
  printf("Type a number and hit ENTER to input that many numbers and find the smallest and largest number of them: ");
  scanf("%d", &n);
  for (count = 1; count <= n; count++) {
    printf("Type number %d and hit ENTER: ", count);
    scanf("%d", &num);
    if (max) {
      max = num > max ? num : max;
    }
    else {
      max = num;
    }
    if (min) {
      min = num < min ? num : min;
    }
    else {
      min = num;
    }
  }
  printf("Out of all the number that you've entered, the smallest and largest numbers are %d and %d respectively.\n", min, max);
}