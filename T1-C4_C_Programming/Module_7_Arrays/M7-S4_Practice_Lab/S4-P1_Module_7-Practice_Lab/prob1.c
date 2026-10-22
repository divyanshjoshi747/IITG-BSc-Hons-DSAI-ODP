#include <stdio.h>

int main(void) {
  double arr1[20];

  for(int i = 0; i < 20; i++) {
    arr1[i] = i;
    printf("The address of the element %d is %p.\n", i, &arr1[i]);
  }
}