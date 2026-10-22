#include <stdio.h>

int main(void) {
  printf("This is a program to check if the matrix entered by you is an upper triangular matrix.\n");
  int size;
  printf("Type the size of the matrix and hit ENTER: ");
  scanf("%d", &size);
  int arr1[size][size];
  for(int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("Type the element at index [%d][%d]: ", i, j);
      scanf("%d", &arr1[i][j]);
    }
  }
  int istrue = 1;
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      if (i > j) {
        if(arr1[i][j] != 0) {
          istrue = 0;
        }
      }
      else {
        if(arr1[i][j] == 0) {
          istrue = 0;
        }
      }
    }
  }
  if (istrue == 1) {
    printf("The matrix entered by you is an upper triangular matrix.\n");
  }
  else {
    printf("The matrix entered by you is not an upper triangular matrix.\n");
  }
}