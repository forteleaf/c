#include< iostream>

using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int main() {
	// r-value : 등호를 기준으로 오른쪽이 r-value 수정할 수 없는 값
	// l-value : 수정할 수 있는 값
	// & 대신에 && 로 변경하면 레퍼런스 변수를 제공하게 된다.

	int a(5);
	int &b = a;
	int &r1 = a;
	int &r2 = 3; // 메모리에 저장할 수 없는 부분
	int &r3 = a * a; // 메모리 상에 저장되어 있는 값이 아니기에 사용할 수 없다.

	a * a = 4;


}