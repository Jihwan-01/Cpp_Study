#include <iostream>
using namespace std;

int main() {
	double list[5];
	cout << "5 ���� �Ǽ��� �Է��϶�>>";

	for (int i = 0; i < 5; i++)
		cin >> list[i];

	double maximum = list[0];
	for (int j = 1; j < 5; j++) {
		if (maximum < list[j])
			maximum = list[j];
	}
	cout << "���� ū �� = " << maximum << "\n";
}