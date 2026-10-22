#include <stdio.h>
#define SIZE 4

int main(void) {
  double mark[SIZE];
  int i;
  printf("size of double is %lu.\n", sizeof(double));

  for(int i = 0; i < SIZE; i++) {
    printf("Address of mark[%d] is %p.\n", i, &mark);
  }
}