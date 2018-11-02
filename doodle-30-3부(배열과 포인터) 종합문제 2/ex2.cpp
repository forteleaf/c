#include<stdio.h>

int main() {
	int arr[3][3] = { 0 };

	printf("%d\n", &arr[0][0]); // 弥家 宏钒狼 林家蔼 100

	printf("%d\n", arr[0] + 1); // --------------------- 撇覆
	printf("%d\n", &arr[0] + 1); // 林家蔼 + 1  104
	printf("%d\n", arr + 1); // 林家蔼 + 1		104
	printf("%d\n", &arr + 1); // 林家蔼 +1		100 + 36
	printf("%d\n", *arr[0]); // 林家蔼 +1		100 + 36

}