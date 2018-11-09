#include <iostream>


using namespace std;

int main() {
	// r-value 수정할 수 없는값

	int a(5);
	int &r1 = a;
	int &&r2 = 3;
	int &&r3 = a * a;

}
