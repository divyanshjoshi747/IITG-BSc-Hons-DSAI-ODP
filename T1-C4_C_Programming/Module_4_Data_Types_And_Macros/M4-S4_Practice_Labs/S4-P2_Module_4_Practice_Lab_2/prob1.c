#include <stdio.h>
#define toCelsius(temp) (temp - 32) * 5/9
int main(void) {
  printf("Type the temperature value in Fahrenheit and hit ENTER to get the output in Celsius: ");
  double temp;
  scanf("%lf", &temp);
  printf("The temperature in Celsius is %lf.\n", toCelsius(temp));
}