// ����ü ������
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
	ProductInfo myProduct = { 238763, "���� �Ѷ��", 20000 };

	productSale(&myProduct, 10);

	printf("��ǰ��ȣ : %d\n", myProduct.num);
	printf("��ǰ�̸� : %s\n", myProduct.name);
	printf("��    �� : %d\n", myProduct.cost);

	printf("sizeof(myProduct) = %d\n", sizeof(myProduct)); // �޸𸮻��� ������
	printf("sizeof(myProduct) = %d\n", &myProduct); // �޸𸮻��� ������


}