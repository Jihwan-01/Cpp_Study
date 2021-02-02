#include <iostream>
using namespace std;

int main() {
	int i, j, a;

	cout << "정수를 입력하세요>>";
	cin >> a;

	for (i = a; i > 0; i--) {
		for (j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
