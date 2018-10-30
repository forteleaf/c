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

// 실수를 정수형 변수에 담을 수 없다.
// 정수를 실수형 변수에 담을 수 없다.

char: 1byte 정수형 ( int: 4byte )
character: 문자 (반각문자 ABCDAasdfa1247e156_+_+)#%^) 한글 중국어 한자


```
#include<stdio.h>

int main() {
	//char arr[] = "abc";
	char arr[] = { 'a','b','c','\0' };

	printf("배열의 크기 : %d", sizeof(arr));
}
```

# pointer + 1
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a의 값 :  %d \n", ptr_a);		// 5766208
	printf("ptr_a + 1의 값 : %d\n", ptr_a + 1); // 5766212 - 4
												// pointer + 1 이면 메모리상에 4byte 가 넘어감
												// 실질적으로 포인터가 가르키고 있는 형의 + 가 되는 것임

#include <stdio.h>

```
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]);
	}
  // arr의 값: 11532924
  // &arr[0] = 11532924
  // &arr[1] = 11532928
  // &arr[2] = 11532932
  // &arr[3] = 11532936
  // &arr[4] = 11532940
  // &arr[5] = 11532944
  // &arr[6] = 11532948
  // &arr[7] = 11532952
  // &arr[8] = 11532956
  // &arr[9] = 11532960

}
```