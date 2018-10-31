#include<stdio.h>

struct Point { int x, y; };

int main() {
	Point p; // struct { int x, y; } p

	p.x = 20;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}