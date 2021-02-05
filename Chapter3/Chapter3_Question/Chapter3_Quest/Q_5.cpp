#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random(); // 생성자
	int next(); // 0부터 32767 사이의 랜덤한 정수 리턴
	int nextInRange(int a, int b); // a에서 b 사이의 랜덤한 정수 리턴
};

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	return rand(); // rand()는 0부터 32767 사이의 랜덤 정수 발생
}

int Random::nextInRange(int a, int b) {
	int RangeValue = b - a + 1;
	return a + rand() % RangeValue;
}

int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}