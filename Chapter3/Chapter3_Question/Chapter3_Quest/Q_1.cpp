#include <iostream>
using namespace std;

// Tower Ŭ���� �����
class Tower {
	int height;
public:
	Tower();
	Tower(int a);
	int getHeight();
};

// Tower Ŭ���� ������
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
	Tower myTower; // 1 ����
	Tower seoulTower(100); // 100 ����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}