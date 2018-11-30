#include<iostream>

using namespace std;

int n;
void set() {
	n = 10; // 명시적 전역변수임을 선언
}

namespace doodle {
	int n;
	void set() {
		n = 20;
	}
}

namespace google {
	int n;
	void set() {
		n = 30;
	}
}

int main() {
	::set();
	doodle::set();
	google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;;
	cout << google::n << endl;
}