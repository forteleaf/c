#include<stdio.h>

#define SQUARE(X) ((X * X))

int main() {
	int a;
	scanf_s("%d", &a);
	printf("%d\n", SQUARE(a)); // a*a ��� ������ ��ü�ȴ�.
}