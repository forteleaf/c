// ������ : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include<iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // ������
		cout << "�����ڰ� ȣ��" << endl;
	}
	~MyClass() { // �Ҹ���
		cout << "�Ҹ��ڰ� ȣ��" << endl;

	}
};	

// MyClass globalObj;

void testLocalObj() {
	cout << "testLocalobj start" << endl;
	MyClass localobj;
	cout << "testLocalobj end" << endl;
}

int main() {
	cout << "main�Լ� ����!!!" << endl;
	testLocalObj();
	cout << "main�Լ� ��!!!!" << endl;
}
