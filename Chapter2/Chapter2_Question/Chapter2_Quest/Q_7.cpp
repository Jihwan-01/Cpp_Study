#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char address[100];
	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(address, 100);
		if (strcmp(address, "yes") == 0) {
			cout << "�����մϴ�...\n";
			break;
		}
		else
			continue;
	}
}