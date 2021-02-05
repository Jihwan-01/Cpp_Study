#include "OpenChallenge_chap3_Exp.h"

Exp::Exp() { x = 1; y = 1; }
Exp::Exp(int a) { x = a; y = 1; }
Exp::Exp(int a, int b) { x = a; y = b; }

int Exp::getValue() {
	int value = 1;
	for (int i = 0; i = y; i++)
		value = value * x;
	return value;
}

int Exp::getBase() {
	return x;
}

int Exp::getExp() {
	return y;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}