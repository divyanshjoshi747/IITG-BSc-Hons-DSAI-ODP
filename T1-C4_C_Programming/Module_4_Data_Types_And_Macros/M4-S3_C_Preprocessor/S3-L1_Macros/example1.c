#include <stdio.h>
#define PI 3.14
int main(void) {
  printf("PI: %f\n", PI);
  printf("%s \n", __TIME__);
  printf("%s \n", __DATE__);
  printf("%s \n", __FILE__);
  printf("%d \n", __LINE__);
  printf("%d \n", __STDC__);
}