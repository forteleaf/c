#include <stdio.h>

int main() {
	char a;

	printf("입력 알파벳 :");
	scanf_s("%c", &a);

	printf("다음 알파벳은 %c", a + 1);
}