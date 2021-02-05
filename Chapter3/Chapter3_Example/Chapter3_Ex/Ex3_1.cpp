#include <iostream>
using namespace std;

// Circle 클래스 선언부
class Circle {
public:
	int radius; // 멤버 변수
	double getArea(); // 멤버 함수
};

// Circle 클래스 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // donut 객체 생성
	donut.radius = 1; // donut의 멤버 변수 접근. donut 객체의 반지름을 1로 설정
	double area = donut.getArea(); // donut의 멤버 함수 호출. donut 객체의 면적 알아내기
	cout << "donut 면적은 " << area << endl;

	Circle pizza; // pizza 객체 생성
	pizza.radius = 30; // pizza의 멤버 변수 접근. pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea(); // pizza의 멤버 함수 호출. pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;
}