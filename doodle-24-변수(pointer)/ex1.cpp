// Pointer : ������ �ּҸ� �����ϴ� ����

#include <stdio.h>

int main() {
	int a = 20;
	char c = 'h';

	int *ptr_a;
	int *ptr_c;

	ptr_a = &a;

	printf("a�� �� : %d\n", a);
	printf("a�� �ּҰ� : %d\n", &a);
	printf("ptr_a�� ����� �� : %d\n", ptr_a);
	printf("ptr_�� ����Ű�� ������ �� : %d\n", *ptr_a);

}

