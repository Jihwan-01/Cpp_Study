#ifndef ADDER_H
#define ADDER_H

class Adder { // 덧셈 모듈 클래스
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

#endif
