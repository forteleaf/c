// https://www.youtube.com/watch?v=Y-0KlEy6yxs&list=PLlJhQXcLQBJqywc5dweQ75GBRubzPxhAk&index=33
// 배열 포인터 : 배열을 가리키는 포인터
// 포인터 배열 : 포인터들이 배열

#include<stdio.h>

int main() {
	int arr[4] = { 1,2,3,4 };
	int *ptr[4]; // 포인터 배열 선언방법

	for (int i = 0; i < 4; i ++) {
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptr[i]);
	}
	printf("\n");


}