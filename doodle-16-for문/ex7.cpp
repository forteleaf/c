// break : �ݺ��� �Ѱ��� ��������
#include <stdio.h>

int main() {
	for (int i = 0; ; i++) {
		int n;
		scanf_s("%d", &n);
		if (n == 0) {
			break;
		}
		printf("%d��° : %d\n", i, n);
	}
}

