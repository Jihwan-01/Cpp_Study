#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
	int classify; // Ȧ¦ ����
public:
	SelectableRandom(int num); // ������
	int next(); // 0���� 32767 ������ �����ϰ� ������ ���� ����
	int nextInRange(int a, int b); // a���� b ������ �����ϰ� ������ ���� ����
};

SelectableRandom::SelectableRandom(int num) {
	classify = num; // num�� ¦���� ���� ¦�� ����, Ȧ���� ���� Ȧ�� ����
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	if (classify % 2 == 0) {
		int n = rand();
		while (true) {
			if (n % 2 == 0)
				break;
			else
				n = rand();
		}
		return n;
	}
	else {
		int n = rand();
		while (true) {
			if (n % 2 == 1)
				break;
			else
				n = rand();
		}
		return n;
	}
}

int SelectableRandom::nextInRange(int a, int b) {
	int RangeValue = b - a + 1;
	if (classify % 2 == 0) {
		int Value = a + rand() % RangeValue;
		while (true) {
			if (Value % 2 == 0)
				break;
			else
				Value = a + rand() % RangeValue;
		}
		return Value;
	}
	else {
		int Value = a + rand() % RangeValue;
		while (true) {
			if (Value % 2 == 1)
				break;
			else
				Value = a + rand() % RangeValue;
		}
		return Value;
	}
}

int main() {
	SelectableRandom Even(0);
	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = Even.next();
		cout << n << ' ';
	}
	SelectableRandom Odd(1);
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = Odd.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}