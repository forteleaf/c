#include <stdio.h>

int main() {
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a�� �� :  %d \n", ptr_a);		// 5766208
	printf("ptr_a + 1�� �� : %d\n", ptr_a + 1); // 5766212 - 4
												// pointer + 1 �̸� �޸𸮻� 4byte �� �Ѿ
												// ���������� �����Ͱ� ����Ű�� �ִ� ���� + �� �Ǵ� ����


}