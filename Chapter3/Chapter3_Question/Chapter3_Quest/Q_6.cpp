#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom(); // 생성자
	int next(); // 0부터 32767 사이의 랜덤한 짝수인 정수 리턴
	int nextInRange(int a, int b); // a에서 b 사이의 랜덤한 짝수인 정수 리턴
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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 짝수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}