// this : ��ü �ڽ��� ����Ű�� ������

#include<iostream>

using namespace std;

class MyClass {
public:
	void PrintThis(MyClass *ptr) {
		cout << "���� �ּҴ� " << ptr << endl;
	}
};
int main() {
	MyClass a, b;
	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ֽ��� " << &b << endl;

	a.PrintThis(&a);
	b.PrintThis(&b);
}
