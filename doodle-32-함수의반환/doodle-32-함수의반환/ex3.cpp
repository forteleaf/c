#include<stdio.h>

int itemCnt = 0;
int money = 100;

int result = 0;

// 아이템을 산다
int buyItem(int cost, int cnt) {

	if (money < cost) {
		return -1;
	}

	itemCnt++;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf(" 아이템 갯수 : %d\n", itemCnt);
	printf(" 잔액: %d\n", money);
	return 0;
}

int main() {
	int result;

	result = buyItem(3000, 5);
	result = buyItem(50, 7);

	/*중략*/
}