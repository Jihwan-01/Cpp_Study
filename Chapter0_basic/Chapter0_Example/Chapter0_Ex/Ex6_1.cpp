#include <iostream>
using namespace std;

// 두 개의 정수를 받아 합을 구하고 결과를 리턴하는 함수 adder
int adder(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}

int main() {
	int n = adder(24567, 98374); // 함수 adder() 호출
	cout << "24567과 98374의 합은 " << n << "입니다\n";

	int a, b;
	cout << "두 개의 정수를 입력하세요";
	cin >> a >> b;
	n = adder(a, b); // 함수 adder() 호출
	cout << a << "와 " << b << "의 합은 " << n << "입니다\n";
}