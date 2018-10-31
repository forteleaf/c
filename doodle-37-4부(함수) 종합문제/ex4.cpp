#include<stdio.h>

void printf_noSpace(const char word[]) {
	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] != ' ' ) printf("%c", word[i]);
	}
}

int main() {
	printf_noSpace("Hello, World!\n");
	printf_noSpace("My name is Doodle\n");
}