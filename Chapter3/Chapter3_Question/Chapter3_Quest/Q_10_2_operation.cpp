/*
본 소스 파일(Q_10_2.cpp)은 Q_10_1.cpp 파일에서 파일 분리를 수행한 파일임.
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