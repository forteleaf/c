// this : 객체 자신을 가르키는 포인터

#include<iostream>

using namespace std;

class MyClass {
public:
	void PrintThis(MyClass *ptr) {
		cout << "나의 주소는 " << ptr << endl;
	}
};
int main() {
	MyClass a, b;
	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주스는 " << &b << endl;

	a.PrintThis(&a);
	b.PrintThis(&b);
}
