/*
�� �ҽ� ����(Q_10_2.cpp)�� Q_10_1.cpp ���Ͽ��� ���� �и��� ������ ������.
*/

#include <iostream>
using namespace std;

#include "Q_10_2_operation.h"

void Add::setValue(int x, int y) {
	a = x; b = y;
}
int Add::calculate() {
	return a + b;
}

void Sub::setValue(int x, int y) {
	a = x; b = y;
}
int Sub::calculate() {
	return a - b;
}

void Mul::setValue(int x, int y) {
	a = x; b = y;
}
int Mul::calculate() {
	return a * b;
}

void Div::setValue(int x, int y) {
	a = x; b = y;
}
int Div::calculate() {
	return a / b;
}