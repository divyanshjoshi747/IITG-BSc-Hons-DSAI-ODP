#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Type a number to allocate that much memory to the program at the time of runtime: ");
  long input;
  scanf("%ld", &input);
  int *ptr;
  ptr = malloc(input * sizeof(int));
  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  else{
    printf("Memory allocation successful!\n");
  }
  for (int i = 0; i < input; i++) {
    *(ptr + i) = i + 1;
  }
  for (int i = 0; i < input; i++) {
    printf("%d\t", *(ptr + i));
  }
  printf("\n");
}