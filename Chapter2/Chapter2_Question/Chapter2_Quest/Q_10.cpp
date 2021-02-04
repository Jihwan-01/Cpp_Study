#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char string[100];
	cout << "문자열 입력>>";
	cin.getline(string, 100);
	for (int i = 0; i < strlen(string); i++) {
		for (int j = 0; j < i + 1; j++)
			cout << string[j];
		cout << "\n";
	}
}
