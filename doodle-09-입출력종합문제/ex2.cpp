#include <stdio.h>

int main() {
	float weight;
	float height;

	printf("ü���Է� : ");
	scanf_s("%f", &weight);

	printf("Ű �Է� :");
	scanf_s("%f", &height);

	float bmi = weight / (height * height);
	printf("%f\n", bmi);
}