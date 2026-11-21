#include <stdio.h>
#include <string.h>

typedef struct {
    int c_code;
    char c_name[50];
    float marks;
} course;

typedef struct {
    char s_name[50];
    int roll_no;
    course subjects[4];
} student;

int main() {
    student bsc_students[250];

    // Use strcpy for char arrays
    strcpy(bsc_students[0].s_name, "Divyansh Joshi");
    bsc_students[0].roll_no = 973;

    // Use (course) compound literals for struct assignment
    bsc_students[0].subjects[0] = (course){101, "Basic English", 90};
    bsc_students[0].subjects[1] = (course){102, "Data Analysis Basics", 80};
    bsc_students[0].subjects[2] = (course){103, "Introduction to Statistics", 50};
    bsc_students[0].subjects[3] = (course){104, "C Programming", 75};

    for(int i = 0; i < 2; i++) {
      scanf("%s", bsc_students[i].s_name);
      scanf("%d", &bsc_students[i].roll_no);
      for (int j = 0; j < 4; j++) {
        scanf("%s", bsc_students[i].subjects[j].c_code);
        scanf("%s", bsc_students[i].subjects[j].c_name);
        scanf("%f", &bsc_students[i].subjects[j].marks);
      }
    }
    return 0;
}