#include<stdio.h>

int main() {
	int arr[3][3] = { 0 };

	printf("%d\n", &arr[0][0]); // �ּ� �귰�� �ּҰ� 100

	printf("%d\n", arr[0] + 1); // --------------------- Ʋ��
	printf("%d\n", &arr[0] + 1); // �ּҰ� + 1  104
	printf("%d\n", arr + 1); // �ּҰ� + 1		104
	printf("%d\n", &arr + 1); // �ּҰ� +1		100 + 36
	printf("%d\n", *arr[0]); // �ּҰ� +1		100 + 36

}