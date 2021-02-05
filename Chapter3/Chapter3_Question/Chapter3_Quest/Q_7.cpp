#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
	int classify; // 홀짝 구분
public:
	SelectableRandom(int num); // 생성자
	int next(); // 0부터 32767 사이의 랜덤하고 정해진 정수 리턴
	int nextInRange(int a, int b); // a에서 b 사이의 랜덤하고 정해진 정수 리턴
};

SelectableRandom::SelectableRandom(int num) {
	classify = num; // num이 짝수면 랜덤 짝수 생성, 홀수면 랜덤 홀수 생성
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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = Even.next();
		cout << n << ' ';
	}
	SelectableRandom Odd(1);
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = Odd.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}