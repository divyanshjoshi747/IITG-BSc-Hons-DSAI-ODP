#include <stdio.h>
int main(void) {
  int num;
  label: for (num = 1; num <=10; num++) {
    if (num == 5) {
      goto label;
    }
    printf("%d\n", num);
  }
}