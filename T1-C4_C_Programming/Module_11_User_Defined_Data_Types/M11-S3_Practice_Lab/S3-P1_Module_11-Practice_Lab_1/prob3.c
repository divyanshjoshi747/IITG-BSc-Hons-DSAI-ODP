#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int getDaysInMonth(enum Month m) {
    switch (m) {
        case JAN: case MAR: case MAY: case JUL:
        case AUG: case OCT: case DEC:
            return 31;
        case APR: case JUN: case SEP: case NOV:
            return 30;
        case FEB:
            return 28; // 29 in a leap year
        default:
            return -1;
    }
}

int main() {
    int input;
    printf("Enter month number (1-12): ");
    scanf("%d", &input);

    int days = getDaysInMonth((enum Month)input);
    if (days != -1) {
        printf("Number of days: %d\n", days);
    } else {
        printf("Invalid month number.\n");
    }

    return 0;
}