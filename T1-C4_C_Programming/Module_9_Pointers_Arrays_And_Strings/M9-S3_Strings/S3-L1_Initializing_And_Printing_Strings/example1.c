#include <stdio.h>

int main(void) {
  char arr[] = "Divyansh Joshi";
  for (int i = 0; i < (sizeof(arr)/sizeof(char)); i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}