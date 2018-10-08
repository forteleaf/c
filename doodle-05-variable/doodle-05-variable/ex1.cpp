#include <stdio.h>

int main() {
	/*
	// int : 32bit(4byte), 정수를 담는데 쓰임
	int a = 5;
	int b = 3;
	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;  // 2
	int namuuji = a % b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d %% %d = %d\n", a, b, namuuji);
	*/

	// float : 32bit(4byte), 실수
	float a = 9.8;
	float b = 2.12;

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%.3f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
} 
/*

int 32 bit
00000000 00000000 00000000 00000101
11111111 11111111 11111111 11111111 = -1
5 = 101(2)
37 = 100101(2)

자료형 - 정수형, 실수형

정수형
	char ( 1 byte ) - 문자를 담음
	short ( 2 byte )
	long ( 4 byte ) -2147483548 ~ +2147483647
	long long ( 8 byte )
	int( 시스템에 따라서 자동 결정, 대체로 long 으로 결정 )

실수형
	float ( 4 byte )
	double ( 8 byte )

unsigned, signed
	unsigned int a;
	unsigned double b;

void
	return 값이 없는 함수의 자료형

bool ( 8 bit = 1byte = char)
	참 거질을 저장하는 자료형

*/