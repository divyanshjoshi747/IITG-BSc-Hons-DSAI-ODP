#include <stdio.h>
int main(void) {
  char c;
  do {
    c = getchar();
    putchar(c);
  } while(c != EOF);
}