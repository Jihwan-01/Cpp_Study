#include <iostream>
using namespace std;

#include "Ex3_11_Calculator.h"
#include "Ex3_11_Adder.h"

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; // ���� �� �� �Է�
	Adder adder(a, b); // ������ ����
	cout << adder.process(); // ���� ���
}