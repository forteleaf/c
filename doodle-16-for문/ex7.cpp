// break : 반복문 한개를 빠져나옴
#include <stdio.h>

int main() {
	for (int i = 0; ; i++) {
		int n;
		scanf_s("%d", &n);
		if (n == 0) {
			break;
		}
		printf("%d번째 : %d\n", i, n);
	}
}

