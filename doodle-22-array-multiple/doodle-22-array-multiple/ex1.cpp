//2���� �迭

#include <stdio.h>
int main() {
	int arr[3][4] = {
		{1,2,3,4},
		{2,3,4,5},
		{9,10,11,12}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}