#include <stdio.h>
int main(void) {
  int c;
  do {
    c = getchar();
    if (c >= 'a' && c <= 'z') {
      c = c - 32;
      putchar(c);
      printf("\n");
    }
    else {
      printf("Please enter a correct value!");
      continue;
    }
  } while(c != EOF);
}