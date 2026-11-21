#include <stdio.h>

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
    student bsc_students[3];

    // Input details for 3 students
    for (int i = 0; i < 3; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", bsc_students[i].s_name);
        printf("Roll No: ");
        scanf("%d", &bsc_students[i].roll_no);

        for (int j = 0; j < 4; j++) {
            printf("Course %d Code: ", j + 1);
            scanf("%d", &bsc_students[i].subjects[j].c_code);
            printf("Course %d Name: ", j + 1);
            scanf(" %[^\n]", bsc_students[i].subjects[j].c_name);
            printf("Course %d Marks: ", j + 1);
            scanf("%f", &bsc_students[i].subjects[j].marks);
        }
    }

    // Report average marks
    printf("\n--- Student Average Marks ---\n");
    for (int i = 0; i < 3; i++) {
        float total = 0;
        for (int j = 0; j < 4; j++) {
            total += bsc_students[i].subjects[j].marks;
        }
        printf("Name: %s | Roll No: %d | Average Marks: %.2f\n",
               bsc_students[i].s_name, bsc_students[i].roll_no, total / 4.0);
    }

    return 0;
}