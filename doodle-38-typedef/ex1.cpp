// type define
// typedef

#include <stdio.h>

int main() {
	typedef int Int32;

	Int32 n = 20; // Int32
	
	printf("%d\n", n);
	printf("%d\n", sizeof(Int32));

}