#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[30] = "Programming Computer";
  char str2[30] = "Programming";
  if (strncmp(str1, str2, 11) == 0) {
    printf("strings str1 and str2 are equal\n");
  }
  else {
    printf("strings str1 and str2 are equal\n");
  }
}