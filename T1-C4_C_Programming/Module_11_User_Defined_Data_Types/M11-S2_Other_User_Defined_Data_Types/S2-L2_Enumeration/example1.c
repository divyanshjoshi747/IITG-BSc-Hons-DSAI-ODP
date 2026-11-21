#include <stdio.h>

enum Months {
  January, // 0
  February, // 1
  March, // 2
  April, // 3
  May, // 4
  June, // 5
  July, // 6
  August, // 7
  September, // 8
  October, // 9
  November, // 10
  December // 11
};

int DaysInMonth(enum Months month) {
  switch(month) {
    case April:
    case June:
    case September:
    case November:
      return 30;
    case February:
      return 28; // Assuming it's not a leap year
    default:
      return 31;
  }
}

int main(void) {
  int month;
  printf("Enter the month (as a number, 0-11): ");
  scanf("%d", &month);
  if (month < January || month > December) {
    perror("Invalid month number.\n");
    exit(1);
  }
  int numDays = DaysInMonth(month);
  printf("Number of days in the selected month: %d\n", numDays);
}