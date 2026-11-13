#include <stdio.h>
#include <string.h>

int main(void) {
  char mystr[40] = "I am an example of function strchr";
  printf("%s\n", strchr(mystr, 'f'));
}