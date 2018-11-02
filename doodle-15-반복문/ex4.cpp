#include <stdio.h>

int main() {
	int n;

	do {
		printf(" please insert 0\n");
		scanf_s("%d", &n);
	} while (n != 0);

	printf("thanks.");
}