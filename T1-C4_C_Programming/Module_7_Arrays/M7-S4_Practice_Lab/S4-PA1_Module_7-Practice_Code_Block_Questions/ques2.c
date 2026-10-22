//Please do not delete or modify the code below. 
//Please write your code wherever comments are given as "//Write your code here"

#include <stdio.h>

int main() {
    
    int arr1[2][2];

    printf("Enter the elements of the 2 x 2 matrix\n");

    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++) {
        scanf("%d", &arr1[i][j]);
      }
    }

    printf("Input matrix\n"); 
    // Please use tab (\t) character only once, between the elements of each row of the matrix while printing. Do not use space character.
    
    for(int i = 0; i < 2; i++) {
      printf("%d\t%d\n", arr1[i][0], arr1[i][1]);
    }
    
    printf("Odd elements\n");
    
    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++) {
        if (arr1[i][j]%2 != 0) {
          printf("%d\n", arr1[i][j]);
        }
      }
    }

    
}