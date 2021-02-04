#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100]; // 커피의 종류
	int num; // 커피의 잔 수
	int sum = 0; // 매출
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	
	while (sum <= 20000) {
		cout << "주문>> ";
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0) {
			cout << 2000 * num << "원입니다. 맛있게 드세요" << endl;
			sum += 2000 * num;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			cout << 2300 * num << "원입니다. 맛있게 드세요" << endl;
			sum += 2300 * num;
		}
		else {
			cout << 2500 * num << "원입니다. 맛있게 드세요" << endl;
			sum += 2500 * num;
		}
	}

	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
}