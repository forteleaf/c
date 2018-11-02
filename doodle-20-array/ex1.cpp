#include<stdio.h>

int main() {
	// array
	int arr[5] = { 3,1,2,3,4 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}


