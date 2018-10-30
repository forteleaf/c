#include<stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int *ptr;

	ptr = &a;
	*ptr = 30;

	ptr = &b;
	*ptr = 10;

	printf("%d %d %d \n", a, b, *ptr);


}