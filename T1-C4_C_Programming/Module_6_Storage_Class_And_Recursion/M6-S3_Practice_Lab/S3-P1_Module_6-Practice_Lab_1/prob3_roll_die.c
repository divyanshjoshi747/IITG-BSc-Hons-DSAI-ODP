#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_die() {
  srand(time(0));
  return rand()%6+1;
}