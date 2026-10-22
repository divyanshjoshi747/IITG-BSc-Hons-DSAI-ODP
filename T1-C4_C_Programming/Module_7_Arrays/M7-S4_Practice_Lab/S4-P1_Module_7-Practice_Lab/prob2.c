#include <stdio.h>

int main(void) {
  int arr1[12];

  for(int i = 0; i < 12; i++) {
    printf("Type the element at index %d and hit ENTER: ", i);
    scanf("%d", &arr1[i]);
  }

  int large1 = -1, large2 = -1, large3 = -1;

  for(int i = 0; i < 12; i++) {
    if(arr1[i] > large1) {
      large3 = large2;
      large2 = large1;
      large1 = arr1[i];
    }
    else if(arr1[i] > large2 && arr1[i] != large1) {
      large3 = large2;
      large2 = arr1[i];
    }
    else if(arr1[i] > large3 && arr1[i] != large1 && arr1[i] != large2) {
      large3 = arr1[i];
    }
  }
  printf("The first, second, and third largest numbers are %d, %d, and %d, respectively.\n", large1, large2, large3);
}