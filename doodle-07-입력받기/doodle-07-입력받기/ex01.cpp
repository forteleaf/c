// #define _CRT_SECURE_NOWARNINGS
#include <stdio.h>

int main() {
	float a, b;

	scanf_s("%f%f", &a, &b); // & ���ۼ��� ������

	printf("%f + %f = %f\n", a, b, a+b);
	printf("%f - %f = %f\n", a, b, a-b);
	printf("%f * %f = %f\n", a, b, a*b);
	printf("%f / %f = %f\n", a, b, a/b);

}