#include<stdio.h>

// call-by-value : ���� �����ϴ� ��
// call-by-reference : ���� ����

void printArr(int arr[4]) {
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2;
	}
}

int main() {
	int arr[4] = { 1,2,3,4 };
	printArr(arr);

	for (int i = 0; i < 4; i++) {
		printf("%d : %d \n", &arr[i] ,arr[i]);
	}
}