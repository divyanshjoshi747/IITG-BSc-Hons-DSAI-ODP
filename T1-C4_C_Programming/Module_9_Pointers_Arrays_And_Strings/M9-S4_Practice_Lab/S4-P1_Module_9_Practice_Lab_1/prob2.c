#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Type the number of rows in your desired array and hit ENTER: ");
  int row;
  scanf("%d", &row);
  printf("Type the number of columns in your desired array and hit ENTER: ");
  int col;
  scanf("%d", &col);
  int *ptr;
  ptr = (int *) malloc(row * col * sizeof(int));
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      *((ptr + i) + j) = i + j + 1;
    }
  }
  for(int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d\t", *((ptr + i) + j));
    }
  }
}