#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char address[100];
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(address, 100);
		if (strcmp(address, "yes") == 0) {
			cout << "종료합니다...\n";
			break;
		}
		else
			continue;
	}
}