// prototype : ����, ����ǰ
// �Լ��� ������ �̸� ������ ���� ����ϴ� ���

#include<stdio.h>

void walk(int);
void rotate(int);
void drawSquare();

int main() {
	drawSquare();
}

// �ȱ�
void walk(int distance) {
	printf("%dm�� �ɾ����ϴ�.\n", distance);

}

// ����
void rotate(int angle) {
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}

void drawSquare() {
	for (int i = 0; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}