#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar; // 커피량, 물량, 설탕의 양
public:
	CoffeeMachine(int coff, int wat, int sug); // 생성자
	void show(); // 현재 커피 머신의 상태 출력
	void fill(); // 커피 10, 물 10, 설탕 10으로 채움
	void drinkEspresso(); // 커피 1, 물 1 소비
	void drinkAmericano(); // 커피 1, 물 2 소비
	void drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
};

CoffeeMachine::CoffeeMachine(int coff, int wat, int sug) {
	coffee = coff; water = wat; sugar = sug;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
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