#include<stdio.h>

struct ProductInfo{
	int num; // 4b
	char name[100]; // 100b
	int cost; // 4b
};

int main() {
	ProductInfo myProduct = { 238763, "���� �Ѷ��", 19900 };

	printf("��ǰ��ȣ : %d \n", myProduct.num);
	printf("��ǰ�̸� : %s\n", myProduct.name);
	printf("��    �� : %d\n", myProduct.cost);

	printf("sizeof(myProduct) = %d\n", sizeof(myProduct)); // �޸𸮻��� ������
	printf("sizeof(myProduct) = %d\n", &myProduct); // �޸𸮻��� ������


}