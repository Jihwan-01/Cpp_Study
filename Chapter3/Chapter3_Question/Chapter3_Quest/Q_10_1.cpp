/*
�� �ҽ��ڵ�(Q_10_1.cpp)�� ���� ���ϸ�: Calculator.cpp
Q_10_2.cpp ������ �� ���Ͽ��� ���� �и��� ������ ������.
*/

#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Add::setValue(int x, int y) {
	a = x; b = y;
}
int Add::calculate() {
	return a + b;
}

class Sub {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Sub::setValue(int x, int y) {
	a = x; b = y;
}
int Sub::calculate() {
	return a - b;
}

class Mul {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Mul::setValue(int x, int y) {
	a = x; b = y;
}
int Mul::calculate() {
	return a * b;
}

class Div {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Div::setValue(int x, int y) {
	a = x; b = y;
}
int Div::calculate() {
	return a / b;
}

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int n1, n2;
	char oper;
	while (true) {
		cout << "�� ������ �����ڸ� ����� �����Ͽ� �Է��ϼ���>>";
		cin >> n1 >> n2 >> oper;
		if (oper == '+') {
			a.setValue(n1, n2);
			cout << a.calculate() << endl;
		}
		else if (oper == '-') {
			s.setValue(n1, n2);
			cout << s.calculate() << endl;
		}
		else if (oper == '*') {
			m.setValue(n1, n2);
			cout << m.calculate() << endl;
		}
		else if (oper == '/') {
			d.setValue(n1, n2);
			cout << d.calculate() << endl;
		}
	}
}
	