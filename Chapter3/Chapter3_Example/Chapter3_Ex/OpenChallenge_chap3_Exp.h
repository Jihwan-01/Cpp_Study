#ifndef OPENCHALLENGE_CHAP3_EXP_H
#define OPENCHALLENGE_CHAP3_EXP_H

class Exp {
	int x, y; // x는 베이스(밑), y는 지수
public:
	Exp();
	Exp(int a);
	Exp(int a, int b);
	int getValue(); // 지수를 정수로 계산하여 리턴
	int getBase(); // 베이스(밑) 값 리턴
	int getExp(); // 지수 값 리턴
	bool equals(Exp b); // 이 객체와 객체 b의 값이 같은지 판별하여 리턴
};

#endif