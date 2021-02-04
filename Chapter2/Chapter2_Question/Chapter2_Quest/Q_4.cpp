#include <iostream>
using namespace std;

int main() {
	double list[5];
	cout << "5 개의 실수를 입력하라>>";

	for (int i = 0; i < 5; i++)
		cin >> list[i];

	double maximum = list[0];
	for (int j = 1; j < 5; j++) {
		if (maximum < list[j])
			maximum = list[j];
	}
	cout << "제일 큰 수 = " << maximum << "\n";
}