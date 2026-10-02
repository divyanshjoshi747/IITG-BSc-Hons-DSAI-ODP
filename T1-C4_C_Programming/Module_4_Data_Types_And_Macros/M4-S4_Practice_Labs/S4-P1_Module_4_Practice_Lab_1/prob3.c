#include <stdio.h>
int main(void) {
  char c;
  while(c != EOF) {
    printf("Type a character and hit ENTER to change it's casing: ");
    c = getchar();
    if (c >= 'A' && c <= 'Z') {
      c+=32;
      printf("%c\n", c);
    }
    else if(c >= 'a' && c <= 'z') {
      c-=32;
      printf("%c\n", c);
    }
    else {
      printf("It is not an alphabet!\n");
    }
  }
}