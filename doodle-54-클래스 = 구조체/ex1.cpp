// Ŭ���� = �ڷ� ���� + �ڷ� ó�� = ����, �Լ�
// Ŭ����(type) : Ư���� �뵵�� �����ϱ� ����
// ��ü(������Ʈ) : �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸� ���� ����)

#include<iostream>

using namespace std;

// private, protected, public

class TV {
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV �� �׽��ϴ�." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}
	void setChannel(int cn) {
		if (cn >= 1 && cn <= 999) {
			channel = cn;
			cout << "ä���� " << cn << "(��)�� �ٲ���ϴ�." << endl;
		}
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "������ " << vol << "(��)�� �ٲ���ϴ�." << endl;
		}
	}
};

int main() {
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	lg.setChannel(-73);
}

