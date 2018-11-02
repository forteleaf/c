// call-by-value
// call-by-reference // 변수를 참조한다.

#include<stdio.h>
void swap(int *x, int *y) {

	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a, b;

	scanf_s("%d%d", &a, &b);

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

}