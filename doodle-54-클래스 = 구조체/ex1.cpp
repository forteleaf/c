// 클래스 = 자료 저장 + 자료 처리 = 변수, 함수
// 클래스(type) : 특정한 용도를 수행하기 위한
// 객체(오브젝트) : 그 틀을 이용하여 찍어낸 객체(변수, 메모리 상의 공간)

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
		cout << "TV 를 켰습니다." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}
	void setChannel(int cn) {
		if (cn >= 1 && cn <= 999) {
			channel = cn;
			cout << "채널을 " << cn << "(으)로 바꿨습니다." << endl;
		}
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "볼륨을 " << vol << "(으)로 바꿨습니다." << endl;
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

