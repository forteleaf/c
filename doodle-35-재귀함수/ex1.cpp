// Àç±ÍÇÔ¼ö
// recursion

#include<stdio.h>

void rec(int n) {
	if (n > 5) return;
	printf("%d \n",n);
	rec(n+1);
}

int main() {
	rec(1);
}