#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[30] = "Hello";
  char s2[30] = "Computer programming";
  strncpy(s1, s2, 12);
  printf("String s1 is %s\n", s1);
}