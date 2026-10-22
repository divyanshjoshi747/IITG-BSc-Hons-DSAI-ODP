#include <stdio.h>

int main(void) {
  double marks[5][4] = { 10, 23, 31, 11, 20, 43, 21, 21,12, 22, 30, 13, 30, 31, 26, 41,13, 03, 41, 15 };
  for(int i = 0; i < 5; i++) {
    double total = 0.0;
    for (int j = 0; j < 4; j++) {
      total+=marks[i][j];
    }
    double average = total/4.0;
    printf("The average marks scored by student %d are: %lf.\n", i, average);
  }
}