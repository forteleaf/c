#include<stdio.h>

int main() {
	FILE *in; // 스트림 파일을 가리키는 포인터다
	int n;

	in = fopen("inputt.txt", "r");

	if (in != nullptr) {

		printf("in = %d\n", in);

		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}

}