#include <stdio.h>
#include <math.h>
#include "custom.h"

float a, b, c;

int main(void) {
  printf("This is a program to find the perimeter and area of a triangle.\n");
  printf("Type the length of the first side and hit ENTER: ");
  scanf("%f", &a);
  printf("Type the length of the second side and hit ENTER: ");
  scanf("%f", &b);
  printf("Type the length of the third side and hit ENTER: ");
  scanf("%f", &c);
  if (a + b <= c) {
    printf("These are invalid inputs according to general triangle properties.\n");
  }
  else {
    printf("The perimeter of the triangle that you entered is %d.\n", perimeter(a, b, c));
    printf("The area of the triangle which you entered is %f.\n", area(a, b, c));
  }
}

/* use
gcc -o prob1_combined prob1_file1.c prob1_file2.c prob1_file3.c -lm
to compile
*/