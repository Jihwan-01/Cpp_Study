#include <iostream>
using namespace std;

int main() {
	int n[10]; // 정수 10개짜리 빈 메모리 공간
	double d[] = { 0.1, 0.2, 0.5, 3.9 }; // 배열 d에 0.1, 0.2, 0.5, 3.9로 초기화

	int i;
	for (i = 0; i < 10; i++) n[i] = i * 2; // 2의 배수로 n에 값을 채움
	for (i = 0; i < 10; i++) cout << n[i] << ' '; // 배열 n 출력
	cout << "\n"; // 한 줄 띔

	double sum = 0; // C++에서는 필요할 때 변수를 아무 곳이나 선언 가능
	for (i = 0; i < 4; i++) { // 배열 d의 합 계산
		sum += d[i];
	}
	cout << "배열 d의 합은 " << sum; // 배열 d의 합 출력
}