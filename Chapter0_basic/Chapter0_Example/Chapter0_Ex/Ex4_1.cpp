#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;

	for (i = a; i <= b; i++) { // a에서 b까지 합 계산
		sum += i;
	}
	cout << a << "부터 " << b << "까지 합은 " << sum << "이다.";
}