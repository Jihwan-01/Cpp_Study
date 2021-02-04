#include <iostream>
using namespace std;

int sum(int a, int b); // 함수 원형 선언; C++에서는 함수의 원형 선언에서 매개 변수를 선언해야 한다.

int main() {
	int n = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << " 입니다.\n"
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}