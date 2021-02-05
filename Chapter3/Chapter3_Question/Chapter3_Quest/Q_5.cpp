#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random(); // ������
	int next(); // 0���� 32767 ������ ������ ���� ����
	int nextInRange(int a, int b); // a���� b ������ ������ ���� ����
};

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	return rand(); // rand()�� 0���� 32767 ������ ���� ���� �߻�
}

int Random::nextInRange(int a, int b) {
	int RangeValue = b - a + 1;
	return a + rand() % RangeValue;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}