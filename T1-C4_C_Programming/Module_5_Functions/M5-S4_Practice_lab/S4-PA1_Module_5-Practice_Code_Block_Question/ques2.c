#include <stdio.h>

int octal(int d) {
    int num = d/8;
    int octalnum = -1;
    for (int i = 0; d < num; i++) {
        octalnum = (octalnum==-1) ? octalnum : octalnum+2;
        octalnum += 8;
    }
    octalnum += d%8;
    return octalnum;
}

int main() {
    int decimal;
    scanf("%d", &decimal);
    printf("%d", octal(decimal));
    return 0;
}