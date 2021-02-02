#include <iostream>
using namespace std;

int main() {
	int n[10];
	int i;
	int* p;

	// 배열 n을 3의 배수로 초기화
	for (i = 0; i < 10; i++)
		*(n + i) = i * 3; // 배열의 이름 n을 주소처럼 사용 가능. 배열 n을 3의 배수로 채움

	// 포인터 p를 이용하여 배열 n 출력
	p = n; // 포인터 p에 배열 n의 시작 주소를 설정한다.
	for (i = 0; i < 10; i++) {
		cout << *(p + i) << ' '; // 포인터 p를 이용하여 배열 n의 원소 접근
	}
	cout << "\n";

	// 포인터 p를 이용하여 배열 n의 원소 값 2 증가
	for (i = 0; i < 10; i++) {
		*p = *p + 2; // 포인터 p를 이용하여 배열 n의 원소 값을 2 증가
		p++; // p는 다음 원소의 주소로 증가
	}

	// 배열 n 출력
	for (i = 0; i < 10; i++)
		cout << n[i] << ' ';
	cout << "\n";
}