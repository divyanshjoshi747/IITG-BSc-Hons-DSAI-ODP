#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int rand_no;
  srand(time(0));
  rand_no = rand()%6+1;
  printf("Random number: %d\n", rand_no);
}