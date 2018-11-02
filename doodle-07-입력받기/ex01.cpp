// #define _CRT_SECURE_NOWARNINGS
#include <stdio.h>

int main() {
	float a, b;

	scanf_s("%f%f", &a, &b); // & 임퍼센드 포인터

	printf("%f + %f = %f\n", a, b, a+b);
	printf("%f - %f = %f\n", a, b, a-b);
	printf("%f * %f = %f\n", a, b, a*b);
	printf("%f / %f = %f\n", a, b, a/b);

}