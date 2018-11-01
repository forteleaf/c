#include<stdio.h>

#define FOR(I,S,E) for (int I= S; i<= E ; I++)
#define LOOP while (true)

int main() {
	FOR(i, 1, 10) {
		printf("%d ", i);
	}

	LOOP{
		printf("*");
	}
}