#include <stdio.h>
#include <stdlib.h>

int main(void) {
  const char *s = "12345";
  char *endptr;
  long long int value = strtoll(s, &endptr, 10);
  if (endptr == s) {
    printf("No conversion performed.\n");
  }
  else{
    printf("Converted value: %lld\n", value);
    printf("Characters after conversion: %s\n", endptr);
  }
}