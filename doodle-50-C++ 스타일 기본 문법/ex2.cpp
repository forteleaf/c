// ���� ��� for��

#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3,1,4,1,5,8,2,6,5,3 };

	//for (int i = 0; i < 10; i++) {
	//	cout << arr[i] << endl;
	//}

	for (int &n : arr) {
		cout << n << ' ';
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}

	cout << endl;
	
}