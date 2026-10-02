#include <stdio.h>
int main(void) {
  printf("This is a tool to get time in seconds by inputting it in hours, minutes and seconds.\n");
  int hours, minutes, seconds, output;
  double percentage;
  printf("Type your time in hours and hit ENTER: ");
  scanf("%d", &hours);
  printf("Type your time in minutes and hit ENTER: ");
  scanf("%d", &minutes);
  printf("Type your time in seconds and hit ENTER: ");
  scanf("%d", &seconds);
  output = hours * 3600 + minutes * 60 + seconds;
  printf("The time in seconds for the time you've given is %d.\n", output);
  percentage = (((double) output) / 86400.0) * 100;
  printf("This time represents about %lf%% of the day.\n", percentage);
}