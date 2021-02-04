#include <iostream>
using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만).\n";

	char address[100];
	cin.getline(address, 100);

	int number = 0;
	for (int i = 0; i < 100; i++) {
		if (address[i] == 'x')
			number++;
	}

	cout << "x의 개수는 " << number << endl;
}