#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[30] = "Programming";
  char s2[30] = "Programming Computer";
  if (strcmp(s1, s2) == 0) {
    printf("strings s1 and s2 are equal\n");
  }
  else {
    printf("string s1 and s2 are different\n");
  }
}