// 비교연산자, 논리 연산자

#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);


	// bool : 진리값을 저장용 변수
	bool p = a > b;
	bool q = a < b;
	bool r = a == b; // == : 같다.

	// a >= b : a는 B보다 크거나 같다.

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);


}