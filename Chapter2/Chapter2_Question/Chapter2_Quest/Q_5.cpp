#include <iostream>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";

	char address[100];
	cin.getline(address, 100);

	int number = 0;
	for (int i = 0; i < 100; i++) {
		if (address[i] == 'x')
			number++;
	}

	cout << "x�� ������ " << number << endl;
}