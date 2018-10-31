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
	ProductInfo myProduct = { 238763, "���� �Ѷ��", 20000};
	ProductInfo otherProduct = { 238763, "���� ������", 10000};

	productSwap(&myProduct, &otherProduct);

	printf("��ǰ��ȣ : %d \n", myProduct.num);
	printf("��ǰ�̸� : %s\n", myProduct.name);
	printf("��    �� : %d\n", myProduct.cost);

}