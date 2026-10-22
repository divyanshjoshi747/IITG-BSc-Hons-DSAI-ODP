#include <stdio.h>

int main(void) {
  float marks[4][3];

  printf("This is a program where you can enter marks of 4 students, 3 subjects each, and can get the average for each of the students.\n");
  
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Type the marks for student %d, subject %d and hit ENTER: ", i+1, j+1);
      scanf("%f", &marks[i][j]);
    }
  }

  for(int i = 0; i < 4; i++) {
    float total = 0;
    for(int j = 0; j < 3; j++) {
      total+=marks[i][j];
    }
    printf("The average marks for student %d are %f.\n", i+1, total/3.0);
  }
}