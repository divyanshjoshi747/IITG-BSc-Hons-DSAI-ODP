#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[10] = "Hello";
  char s2[10] = "World";
  strcat(s1, s2);
  printf("Output %s\n", s1);
}