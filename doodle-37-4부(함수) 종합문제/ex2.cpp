#include <stdio.h>

int userCnt[5] = { 0 };

void useItem(int);

int main() {
	useItem(4);
	useItem(2);
	useItem(1);
	useItem(4);
	useItem(0);

	for (int i = 0; i < 5; i++) {
		printf("����%d�� �������� %d�� ����ϴ�. \n", i, userCnt[i]);
	}
}

void useItem(int itemNum) {
	userCnt[itemNum]++;
}                                   