#include<stdio.h>

int itemCnt = 0;
int money = 100;


// 아이템을 산다
void buyItem(int cost) {
	itemCnt++;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf(" 아이템 갯수 : %d\n", itemCnt);
	printf(" 잔액: %d\n", money);
}
int main() {

	buyItem(30);
	buyItem();

	/*중략*/
}