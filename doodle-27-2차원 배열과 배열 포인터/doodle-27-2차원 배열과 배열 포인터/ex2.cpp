// https://www.youtube.com/watch?v=6i_z0te48vY
/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 = ptr 에 sizeof(*ptr)을 더한값
*/
#include <stdio.h>

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int(*ptr)[3] = arr;

	// 1. ptr[i] == arr[i]
	// 2. ptr[i][j] == arr[i][j]
	// ptr == arr


//	for (int(*row)[3] = arr; row < arr + 2; row++) {
//		for (int *col = *row; col < *row + 3; col++) {
//			printf("%d", *col);
//			printf("\n");
//		}
//}


	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *pt = ar;

	for (int i = 0; i < sizeof(*ar); i++) {
		printf("%d %d\n",i, ar[i]);
	}
}