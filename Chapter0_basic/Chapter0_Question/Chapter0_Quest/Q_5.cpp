#include <iostream>
using namespace std;

bool isMultiple(int a, int b); // (1) 함수의 원형 선언

int main() { // (3) isMultiple()을 호출하는 전체 프로그램
	int a, b;
	cout << "두 정수를 입력하세요>>";
	cin >> a >> b;

	if (isMultiple(a, b))
		cout << "Yes";
	else
		cout << "No";
}

bool isMultiple(int a, int b) { // (2) 함수 작성
	if (b % a == 0)
		return true;
	else
		return false;
}