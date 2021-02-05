#include <iostream>
using namespace std;

struct StructCircle { // C++ 구조체 선언
private:
	int radius;
public:
	StructCircle(int r) { radius = r; } // 구조체의 생성자
	double getArea();
};

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea();
}