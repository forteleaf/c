#include<stdio.h>

int main() {
	int arr[10] = { 3,1,4,1,5,8,2,6,5,3 };

	printf("%d\n", arr); // 100

	for (int i = 3; i < 7; i++) {
		printf("%d %d\n", arr + i, *(arr + i)); // arr+i 
		// �ּҰ� ��� // 1
		// 5
		// 8
		// 2
	}

}