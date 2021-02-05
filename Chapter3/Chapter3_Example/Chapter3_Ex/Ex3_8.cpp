#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "馆瘤抚 " << radius << " 盔 积己" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "馆瘤抚 " << radius << " 盔 积己" << endl;
}

Circle::~Circle() {
	cout << "馆瘤抚 " << radius << " 盔 家戈" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

// 傈开 按眉 积己
Circle globalDonut(1000);
Circle globalPizza(2000);

// 瘤开 按眉 积己
void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	// 瘤开 按眉 积己
	Circle mainDonut;
	Circle mainPizza(30);

	f();
}