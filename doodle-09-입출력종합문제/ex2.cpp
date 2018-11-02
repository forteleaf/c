#include <stdio.h>

int main() {
	float weight;
	float height;

	printf("체중입력 : ");
	scanf_s("%f", &weight);

	printf("키 입력 :");
	scanf_s("%f", &height);

	float bmi = weight / (height * height);
	printf("%f\n", bmi);
}