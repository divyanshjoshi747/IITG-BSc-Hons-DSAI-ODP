#include <stdio.h>
#define area_circle(r) 3.14*r*r
#define area_square(side) side*side
#define area_rect(length, breadth) length*breadth
int main(void) {
  printf("Which shape do you want to find the area of?\n");
  printf("1. Circle\n");
  printf("2. Square\n");
  printf("3. Rectangle\n");
  int choice;
  printf("Type the number corresponding your desired choice and hit ENTER: ");
  scanf("%d", &choice);
  if (choice == 1) {
    printf("Type the radius of the circle and hit ENTER: ");
    double radius;
    scanf("%lf", &radius);
    printf("The area of the cicle is %lf.\n", area_circle(radius));
  }
  else if (choice == 2) {
    printf("Type the size of side of the square and hit ENTER: ");
    double side;
    scanf("%lf", &side);
    printf("The area of the circle is %lf.\n", area_square(side));
  }
  else if (choice == 3) {
    printf("Type the length of the circle and hit ENTER: ");
    double length;
    scanf("%lf", &length);
    printf("Now type the breadth and hit ENTER: ");
    double breadth;
    scanf("%lf", &breadth);
    printf("The area of the rectangle is %lf.\n", area_rect(length, breadth));
  }
  else {
    printf("Please enter a valid choice.\n");
  }
}