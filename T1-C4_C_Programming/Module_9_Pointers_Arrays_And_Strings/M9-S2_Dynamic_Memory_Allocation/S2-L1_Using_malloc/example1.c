#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p;
  p = malloc(10 * sizeof(int));
  if (p == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  else {
    printf("Memory allocation successfully done!\n");
  }
}