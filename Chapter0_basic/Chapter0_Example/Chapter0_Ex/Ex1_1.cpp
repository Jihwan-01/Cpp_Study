#include <iostream>
using namespace std;

int g = 20; /* 전역 변수 */

int add(int x, int y) { // 전역 함수
	return x + y; // x와 y의 합 리턴
}

int main() {
	int a, b, sum; // 지역 변수

	cout << "두 정수를 입력하세요 >>"; // 프롬프트 출력
	cin >> a >> b; // 두 정수를 읽어 a와 b에 입력
	sum = a + b;
	cout << "합은 " << sum << "\n"; // sum 값 출력
	cout << "합은 " << add(a, b) << "\n"; // add() 함수 호출 결과 출력
	cout << "전역 변수 g 값은 " << g; // g 값 출력

	return 0; // 이 return 문을 생략해도 자동으로 return 0; 삽입됨
}
