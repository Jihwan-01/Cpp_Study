/*
�� �ҽ� ����(Q_10_2.cpp)�� Q_10_1.cpp ���Ͽ��� ���� �и��� ������ ������.
*/

#include <iostream>
using namespace std;

#include "Q_10_2_operation.h"

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