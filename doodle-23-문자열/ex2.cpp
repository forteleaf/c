#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "simple";
	char str2[] = "sample";

	int cmp = strcmp(str1, str2);

	printf("%d", cmp);
	
}