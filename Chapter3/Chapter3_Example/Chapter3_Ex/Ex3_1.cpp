#include <iostream>
using namespace std;

// Circle Ŭ���� �����
class Circle {
public:
	int radius; // ��� ����
	double getArea(); // ��� �Լ�
};

// Circle Ŭ���� ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // donut ��ü ����
	donut.radius = 1; // donut�� ��� ���� ����. donut ��ü�� �������� 1�� ����
	double area = donut.getArea(); // donut�� ��� �Լ� ȣ��. donut ��ü�� ���� �˾Ƴ���
	cout << "donut ������ " << area << endl;

	Circle pizza; // pizza ��ü ����
	pizza.radius = 30; // pizza�� ��� ���� ����. pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); // pizza�� ��� �Լ� ȣ��. pizza ��ü�� ���� �˾Ƴ���
	cout << "pizza ������ " << area << endl;
}