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
    student *s_ptr = bsc_students;

    for (int i = 0; i < 3; i++) {
        student *curr_s = (s_ptr + i);
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", curr_s->s_name);
        printf("Roll No: ");
        scanf("%d", &curr_s->roll_no);

        course *c_ptr = curr_s->subjects;
        for (int j = 0; j < 4; j++) {
            course *curr_c = (c_ptr + j);
            printf("Course %d Code: ", j + 1);
            scanf("%d", &curr_c->c_code);
            printf("Course %d Name: ", j + 1);
            scanf(" %[^\n]", curr_c->c_name);
            printf("Course %d Marks: ", j + 1);
            scanf("%f", &curr_c->marks);
        }
    }

    printf("\n--- Student Average Marks ---\n");
    for (int i = 0; i < 3; i++) {
        student *curr_s = (s_ptr + i);
        float total = 0;
        for (int j = 0; j < 4; j++) {
            total += (curr_s->subjects + j)->marks;
        }
        printf("Name: %s | Roll No: %d | Average Marks: %.2f\n",
               curr_s->s_name, curr_s->roll_no, total / 4.0);
    }

    return 0;
}