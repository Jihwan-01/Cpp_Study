#ifndef OPENCHALLENGE_CHAP3_EXP_H
#define OPENCHALLENGE_CHAP3_EXP_H

class Exp {
	int x, y; // x�� ���̽�(��), y�� ����
public:
	Exp();
	Exp(int a);
	Exp(int a, int b);
	int getValue(); // ������ ������ ����Ͽ� ����
	int getBase(); // ���̽�(��) �� ����
	int getExp(); // ���� �� ����
	bool equals(Exp b); // �� ��ü�� ��ü b�� ���� ������ �Ǻ��Ͽ� ����
};

#endif