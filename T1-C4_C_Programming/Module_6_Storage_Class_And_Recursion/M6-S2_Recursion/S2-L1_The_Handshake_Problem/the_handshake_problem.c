#include <stdio.h>

int h(int);
int h(int n) {
  if (n == 0 | n == 1) {
    return 0;
  }
  else {
    return h(n-1) + (n-1);
  }
}

int main(void) {
  printf("Type the number of people and hit ENTER to get the total number of handshakes: ");
  int n;
  scanf("%d", &n);
  printf("The total number of handshakes are: %d.\n", h(n));
}