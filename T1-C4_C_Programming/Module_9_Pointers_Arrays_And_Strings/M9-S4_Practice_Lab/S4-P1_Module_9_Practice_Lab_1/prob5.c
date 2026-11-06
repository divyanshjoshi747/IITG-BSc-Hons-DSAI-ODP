#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Type a number amd hit ENTER to initialize an array of it: ");
  int size;
  scanf("%d", &size);
  float *ptr;
  ptr = (float *) calloc(size, sizeof(float));
  if (ptr == NULL) {
    printf("Memory allocation unsuccessful!\n");
    exit(1);
  }
  for (int i = 0; i < size; i++) {
    *(ptr + i) = (float) i + 10;
    printf("%f\t", *(ptr + i));
  }
  printf("\n");
  printf("You might need a new sized array now.\n");
  printf("Type the new size of the array and hit ENTER: ");
  int new_size;
  scanf("%d", &new_size);
  ptr = (float *) realloc(ptr, new_size * sizeof(float));
  if (ptr == NULL) {
    printf("Memory allocation unsuccessful!\n");
    exit(1);
  }
  for (int i = 0; i < new_size; i++) {
    *(ptr + i) = (float) i + 10;
    printf("%f\t", *(ptr + i));
  }
  printf("\n");
  realloc(ptr, 0);
}