/*
	10 x 10 ������ ������ ������ �迭�� �Է¹޾�
	�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷��� ����� ������.

	�Է� ��
	3 4
	4 2 6 3
	5 1 2 1

	��� ��
	15
	23
	9

*/


#include<stdio.h>

int main() {
	int col, row;
	int ptr[12][12];

	scanf_s("%d%d", &col, &row);

	// �迭�� ���� ����
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			scanf_s("%d", &ptr[i][j]);
		}
	}

	// �� ���� ���ϱ�
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