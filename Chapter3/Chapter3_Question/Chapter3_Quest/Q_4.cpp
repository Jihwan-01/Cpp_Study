#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar; // Ŀ�Ƿ�, ����, ������ ��
public:
	CoffeeMachine(int coff, int wat, int sug); // ������
	void show(); // ���� Ŀ�� �ӽ��� ���� ���
	void fill(); // Ŀ�� 10, �� 10, ���� 10���� ä��
	void drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	void drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	void drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
};

CoffeeMachine::CoffeeMachine(int coff, int wat, int sug) {
	coffee = coff; water = wat; sugar = sug;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t��:" << water << "\t����:" << sugar << endl;
}

void CoffeeMachine::fill() {
	coffee = 10; water = 10; sugar = 10;
}

void CoffeeMachine::drinkEspresso() {
	coffee -= 1; water -= 1;
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1; water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1; water -= 2; sugar -= 1;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}