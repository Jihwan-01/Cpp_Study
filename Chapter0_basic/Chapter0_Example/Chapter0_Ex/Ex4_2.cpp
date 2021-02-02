#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;

	i = a;
	while (i <= b) { // i가 b보다 작거나 같은 동안 반복
		sum += i;
		i++;
	}
	cout << a << "부터 " << b << "까지 합은 " << sum << "이다.";
}