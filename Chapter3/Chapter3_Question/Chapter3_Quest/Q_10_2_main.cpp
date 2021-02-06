/*
본 소스 파일(Q_10_2.cpp)은 Q_10_1.cpp 파일에서 파일 분리를 수행한 파일임.
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
		cout << "두 정수와 연산자를 띄어쓰기로 구분하여 입력하세요>>";
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