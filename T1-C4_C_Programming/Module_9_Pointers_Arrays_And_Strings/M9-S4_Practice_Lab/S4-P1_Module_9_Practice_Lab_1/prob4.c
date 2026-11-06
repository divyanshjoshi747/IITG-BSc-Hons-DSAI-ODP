#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Type a number and hit ENTER to input that many elements and get the maximum: ");
  int n;
  scanf("%d", &n);
  float *ptr = (float *) calloc(n, sizeof(float));
  if (ptr == NULL) {
    printf("Memory allocation unsuccessful!\n");
    exit(1);
  }
  for (int i = 0; i < n; i++) {
    printf("Type number %d and hit ENTER: ", i+1);
    scanf("%f", (ptr + i));
  }
  float max;
  for (int i = 0; i < n; i++) {
    if (max) {
      max = (max < *(ptr + i)) ? *(ptr + i) : max;
    }
    else {
      max = *(ptr + i);
    }
  }
  printf("The maximum number from the numbers that you've inputted is %f.\n", max);
}