// �ڱ� �ڽ��� ����ϴ� �ڵ�

#include <stdio.h>

int main() {
	FILE *in = fopen("ex3.cpp", "r");
	char ch;
	//while (!feof(in)) {
	while (fscanf(in, "%c", &ch) != EOF) {
		printf("%c", ch);
	}
}