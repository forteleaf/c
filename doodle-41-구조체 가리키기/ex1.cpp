// 구조체 포인터
#include<stdio.h>

struct ProductInfo {
	int num; // 4b
	char name[100]; // 100b
	int cost; // 4b
};

void productSale(ProductInfo *p, int percent) {
	p->cost -= p->cost * percent / 100;
}

int main() {
	ProductInfo myProduct = { 238763, "제주 한라봉", 20000 };

	productSale(&myProduct, 10);

	printf("상품번호 : %d\n", myProduct.num);
	printf("상품이름 : %s\n", myProduct.name);
	printf("가    격 : %d\n", myProduct.cost);

	printf("sizeof(myProduct) = %d\n", sizeof(myProduct)); // 메모리상의 사이즈
	printf("sizeof(myProduct) = %d\n", &myProduct); // 메모리상의 사이즈


}