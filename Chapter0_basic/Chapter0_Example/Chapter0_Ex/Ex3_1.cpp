#include <iostream>
using namespace std;

int main() {
	int score;

	cout << "점수를 입력하세요>>";
	cin >> score;

	if (score > 100 || score < 0) {
		cout << "잘못된 점수 입니다";
		return 0;
	}
	
	if (score >= 90) // 90이상 100이하
		cout << "a 입니다";
	else if (score >= 80) // 80이상 90이하
		cout << "b 입니다";
	else if (score >= 70) // 70이상 80이하
		cout << "c 입니다";
	else if (score >= 60) // 60이상 70이하
		cout << "d 입니다";
	else // 0이상 59이하
		cout << "f 입니다";
}