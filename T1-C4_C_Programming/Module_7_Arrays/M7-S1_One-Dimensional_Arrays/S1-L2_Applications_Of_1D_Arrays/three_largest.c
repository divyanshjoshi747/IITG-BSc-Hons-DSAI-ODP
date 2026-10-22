#include <stdio.h>
#define SIZE 12

int main(void) {
  int num[SIZE];
  for (int i = 0; i < SIZE; i++) {
    printf("Type element %d of your array and hit ENTER: ", i+1);
    scanf("%d", &num[i]);
  }

  int large1 = -1, large2 = -1, large3 = -1;
  for (int i = 0; i < SIZE; i++) {
    if (num[i] > large1) {
      large3 = large2;
      large2 = large1;
      large1 = num[i];
    }
    else if (num[i] > large2 && num[i]!=large1) {
      large3 = large2;
      large2 = num[i];
    }
    else if (num[i] > large3 && num[i]!=large1 && num[i]!=large2) {
      large3 = large2;
      large2 = num[i];
    }
  }

  printf("The first, second, and third largest number is %d, %d, and %d, respectively.\n", large1, large2, large3);
}