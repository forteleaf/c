#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	int i, sum;
	for (i = 1, sum = 0; i <= n; sum += i, i++);

	printf("%d\n", sum);

}