#include <stdio.h>

int main() {
	float PI = 3.14, num1;
	float *const ptr1 = &PI;
	ptr1 = &num1;
}