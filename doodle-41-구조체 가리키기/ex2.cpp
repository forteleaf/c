#include <stdio.h>

struct ProductInfo {
	int num; // 4b
	char name[100]; // 100b
	int cost; // 4b
};

void productSwap(ProductInfo *a, ProductInfo *b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	ProductInfo myProduct = { 238763, "제주 한라봉", 20000};
	ProductInfo otherProduct = { 238763, "성주 꿀참외", 10000};

	productSwap(&myProduct, &otherProduct);

	printf("상품번호 : %d \n", myProduct.num);
	printf("상품이름 : %s\n", myProduct.name);
	printf("가    격 : %d\n", myProduct.cost);

}