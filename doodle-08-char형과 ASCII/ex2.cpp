#include <stdio.h>

int main() {
	int a;

	printf("숫자입력 : ");

	scanf_s("%d", &a);
	
	printf("%d 의 ASCII 값 : %c \n", a ,a);
}