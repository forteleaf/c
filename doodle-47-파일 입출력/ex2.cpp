#include<stdio.h>

int main() {
	FILE *in; // ��Ʈ�� ������ ����Ű�� �����ʹ�
	int n;

	in = fopen("inputt.txt", "r");

	if (in != nullptr) {

		printf("in = %d\n", in);

		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}

}