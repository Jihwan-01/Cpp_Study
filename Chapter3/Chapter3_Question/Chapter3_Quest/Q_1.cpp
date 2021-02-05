#include <iostream>
using namespace std;

// Tower 클래스 선언부
class Tower {
	int height;
public:
	Tower();
	Tower(int a);
	int getHeight();
};

// Tower 클래스 구현부
Tower::Tower() {
	height = 1;
}

Tower::Tower(int a) {
	height = a;
}

int Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower; // 1 미터
	Tower seoulTower(100); // 100 미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}