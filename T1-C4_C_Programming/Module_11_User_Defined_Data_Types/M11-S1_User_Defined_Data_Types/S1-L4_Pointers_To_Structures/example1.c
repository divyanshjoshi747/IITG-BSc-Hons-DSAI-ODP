#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  int roll_no;
  float marks;
} student;

int main(void) {
  student students[3], *ptr;
  ptr = students;
  for (int i = 0; i < 3; i++) {
    printf("Type the name of student %d and hit ENTER: ", i+1);
    scanf(" %[^\n]", (ptr+i)->name);
    printf("Type the roll number of student %d and ENTER: ", i+1);
    scanf("%d", &((ptr+i)->roll_no));
    printf("Type the marks of student %d and hit ENTER: ", i+1);
    scanf("%f", &((ptr+i)->marks));
  }

  for (int i = 0; i < 3; i++) {
    printf("The details of student %d are:\nName: %s\nRoll no.: %d\nMarks: %.2f\n", i+1, (ptr+i)->name, (ptr+i)->roll_no, (ptr+i)->marks);
  }
}