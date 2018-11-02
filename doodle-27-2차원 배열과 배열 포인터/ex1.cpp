// https://www.youtube.com/watch?v=6i_z0te48vY

/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 = ptr 에 sizeof(*ptr)을 더한값
*/

#include<stdio.h>

int main() {

	//printf("%d\n", sizeof(arr));		// 24
	//printf("%d\n", sizeof(arr[0]));		// 12
	//printf("%d\n", sizeof(arr[0][0]));	// 4

	//printf("%d\n", &arr);		// 9893596 배열의 시작 주소
	//printf("%d\n", &arr[0]);	// 9893596
	//printf("%d\n", &arr[0][0]);	// 9893596

	int arr[2][3] = { {1,2,3},{4,5,6} }; 

	int(*ptr)[3] = arr;

	// 1. ptr[i] == arr[i]
	// 2. ptr[i][j] == arr[i][j]
	// ptr == arr

	printf("%d\n", sizeof(ptr[3]));

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}

}