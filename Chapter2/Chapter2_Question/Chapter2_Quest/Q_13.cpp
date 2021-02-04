#include <iostream>
using namespace std;

int main() {
	int a, b; // 입력받을 메뉴 번호와 양

	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> a;
		if (a == 4) { // 영업 종료
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}
		else if ((a == 1) || (a == 2) || (a == 3)) { // 메뉴를 선택한 경우
			cout << "몇인분?";
			cin >> b;
			if (a == 1) // 메뉴가 짬뽕일 경우
				cout << "짬뽕 " << b << "인분 나왔습니다" << endl;
			else if (a == 2) // 메뉴가 짜장일 경우
				cout << "짜장 " << b << "인분 나왔습니다" << endl;
			else // 메뉴가 군만두일 경우
				cout << "군만두 " << b << "인분 나왔습니다" << endl;
		}
		else
			cout << "다시 주문하세요!!" << endl;
	}
}