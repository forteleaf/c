#include <stdio.h>

int main() {
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a의 값 :  %d \n", ptr_a);		// 5766208
	printf("ptr_a + 1의 값 : %d\n", ptr_a + 1); // 5766212 - 4
												// pointer + 1 이면 메모리상에 4byte 가 넘어감
												// 실질적으로 포인터가 가르키고 있는 형의 + 가 되는 것임


}