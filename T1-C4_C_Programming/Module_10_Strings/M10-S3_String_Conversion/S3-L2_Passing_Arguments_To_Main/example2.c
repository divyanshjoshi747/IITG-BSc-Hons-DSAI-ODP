#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double sum = 0;
  for (int i = 0; i < argc; i++) {
    char *endptr;
    sum += strtof(argv[i], &endptr);
  }
  printf("The avarage of the numbers passed as command-line arguments is %f.\n", sum/argc);
}