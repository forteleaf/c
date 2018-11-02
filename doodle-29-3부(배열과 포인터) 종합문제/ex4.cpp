/*
	10 x 10 이하의 정수형 이차월 배열을 입력받아
	그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어 보세요.

	입력 예
	3 4
	4 2 6 3
	5 1 2 1

	출력 예
	15
	23
	9

*/


#include<stdio.h>

int main() {
	int col, row;
	int ptr[12][12];

	scanf_s("%d%d", &col, &row);

	// 배열에 값을 저장
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			scanf_s("%d", &ptr[i][j]);
		}
	}

	// 각 행을 더하기
	for (int i = 0; i < col; i++) {
		int sum = 0;
		for (int j = 0; j < row; j++) {
			//printf("%d ", ptr[i][j]);
			sum += ptr[i][j];
		}
		printf("%d\n" , sum);
	}


	printf("\n");

}