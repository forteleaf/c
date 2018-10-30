// factorial
// 5! = 120
// n! = n* (n-1)
#include<stdio.h>

int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	int n;

	scanf_s("%d", &n);

	printf("%d\n", n);
	printf("ÆÑÅä¸®¾ó °ª : %d \n", factorial(n));

}