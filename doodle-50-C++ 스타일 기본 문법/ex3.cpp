#include< iostream>

using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int main() {
	// r-value : ��ȣ�� �������� �������� r-value ������ �� ���� ��
	// l-value : ������ �� �ִ� ��
	// & ��ſ� && �� �����ϸ� ���۷��� ������ �����ϰ� �ȴ�.

	int a(5);
	int &b = a;
	int &r1 = a;
	int &r2 = 3; // �޸𸮿� ������ �� ���� �κ�
	int &r3 = a * a; // �޸� �� ����Ǿ� �ִ� ���� �ƴϱ⿡ ����� �� ����.

	a * a = 4;


}