#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom(); // ������
	int next(); // 0���� 32767 ������ ������ ¦���� ���� ����
	int nextInRange(int a, int b); // a���� b ������ ������ ¦���� ���� ����
};

EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}

int EvenRandom::next() {
	int even = rand();
	while (true) {
		if (even % 2 == 0)
			break;
		else
			even = rand();
	}
	return even;
}

int EvenRandom::nextInRange(int a, int b) {
	int RangeValue = b - a + 1;
	int evenValue = a + rand() % RangeValue;
	while (true) {
		if (evenValue % 2 == 0)
			break;
		else
			evenValue = a + rand() % RangeValue;
	}
	return evenValue;
}

int main() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ¦�� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}