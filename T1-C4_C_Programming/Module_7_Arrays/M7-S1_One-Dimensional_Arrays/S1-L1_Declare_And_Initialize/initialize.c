#include <stdio.h>

int main(void) {
  // using loops
  int arr1[12];
  for (int i = 0; i < 12; i++) {
    arr1[i] = i;
  }
  for(int i = 0; i < 12; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");
  
  //specifying value one by one
  int arr2[5] = {1, 2, 3, 4, 5};  
  for(int i = 0; i < 5; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");
  
  //partial initialization
  int arr3[10] = {1, 2, 3, 4, 5};
  for(int i = 0; i < 10; i++) {
    printf("%d ", arr3[i]);
  }
  printf("\n");
  
  //omitted size
  int arr4[] = {1, 2, 3, 4, 5, 6, 7};
  for(int i = 0; i < 7; i++) {
    printf("%d ", arr4[i]);
  }
  printf("\n");
}