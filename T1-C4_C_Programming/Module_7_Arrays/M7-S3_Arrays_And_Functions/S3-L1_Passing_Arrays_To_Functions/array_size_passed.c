#include <stdio.h>
#define SIZE 3
void fun(int b[], int s){
for (int i=0;i<s;i++)
printf("%d\t",b[i]);
}

int main(void)
{
int a[SIZE]={1, 2, 3};
fun(a,3);
}