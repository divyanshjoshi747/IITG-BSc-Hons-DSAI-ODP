#include <stdio.h>
#include <stdlib.h>

void reverse(int);

void reverse(int n) {
  char *ptr;
  ptr = malloc(n * sizeof(char));
  if (ptr == NULL) {
    printf("Memory allocation unsuccessful!\n");
    exit(1);
  }
  for (int i = 0; i < n; i++) {
    *(ptr + i) = (char) (65 + i);
  }
  for (int i = 0; i < n; i++) {
    printf("%c\t", *(ptr + i));
  }
  printf("\n");
  for (int i = n-1; i >= 0; i--) {
    printf("%c\t", *(ptr + i));
  }
  printf("\n");
  free(ptr);
}

int main(void) {
  printf("Type the number of characters and hit ENTER to print as many number of characters in correct order and in reverse: ");
  int n;
  scanf("%d", &n);
  reverse(n);
}