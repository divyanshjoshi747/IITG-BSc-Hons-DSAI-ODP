#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[20] = "Programming";
  printf("Length of string str1: %lu\n", strnlen(str1, 30));
  printf("Length of string str1: %lu\n", strnlen(str1, 7));
}