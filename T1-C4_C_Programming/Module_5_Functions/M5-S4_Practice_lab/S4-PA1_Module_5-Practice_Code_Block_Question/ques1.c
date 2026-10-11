#include <stdio.h>
#include <math.h>

int SumSeries(int a, int n) {
    int sum = 0;
    for(int i = n; i >= 0; i++) {
        sum += pow(a, i);
    }
    return sum;
}

int main(){
    printf("This is a program to enter two numbers to find their sum-power series.");
    int a;
    int n;
    printf("Type the first number and hit ENTER: ");
    scanf("%d", &a);
    printf("Type the second number and hit ENTER: ");
    scanf("%d", &n);
    printf("The sum series is: %d.\n", SumSeries(a, n));
}