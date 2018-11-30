// 다음과 같은 함수 정의에서 컴파일 오류가 나는 이유를 찾으세요.

#include<iostream>

void drawRectangle(int l, int r,int  t,int  b) {

}

void drawRectangle(int w, int h, int x = 0, int y = 0) {

}

int main() {
	drawRectangle(0, 0, 0, 0);

}