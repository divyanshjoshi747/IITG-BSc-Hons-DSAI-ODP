#include <stdio.h>
float simpleinterest(float, float, float);
float simpleinterest(float p, float r, float t) {
  double interest = (p * r * t)/100;
  return interest;
}
int main(void) {
  printf("This is a program to find simple interest.\n");
  float p, r, t;
  printf("Type the principal amount (in rupees / dollars) and hit ENTER: ");
  scanf("%f", &p);
  printf("Type the rate of interest (in percent) and hit ENTER: ");
  scanf("%f", &r);
  printf("Type the time (in years) and hit ENTER: ");
  scanf("%f", &t);
  printf("The simple interest is ₹/$ %.2f.\n", simpleinterest(p, r, t));
  return 0;
}