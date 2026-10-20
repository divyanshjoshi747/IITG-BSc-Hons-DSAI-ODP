#include <stdio.h>
#include <math.h>

int perimeter(int a, int b, int c) {
  int p = a + b + c;
  return p;
}

float area(int a, int b, int c) {
  float s = 0.5 * perimeter(a, b, c);
  float ar = sqrt(s * (s - a) * (s - b) * (s - c));
  return ar;
}

int main(void){
  float a, b, c;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  if (a + b <= c) {
    printf("Not valid input.\n");
  }
  else {
    printf("Perimeter = %d\n", perimeter(a, b, c));
    printf("Area = %f\n", area(a, b, c));
  }
}
