#include <stdio.h>
#include <string.h>

int main(void) {
  char mystr[40] = "I am an example of function strrchr";
  printf("%s\n", strrchr(mystr, 'f'));
}