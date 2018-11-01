#include<stdio.h>

#define SQUARE(X) ((X * X))

int main() {
	int a;
	scanf_s("%d", &a);
	printf("%d\n", SQUARE(a)); // a*a 라는 식으로 교체된다.
}