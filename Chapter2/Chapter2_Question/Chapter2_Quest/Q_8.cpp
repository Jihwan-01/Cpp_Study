#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[100];
	char longest[100] = "";
	cout << " 5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
		if (strlen(name) > strlen(longest))
			strcpy_s(longest, name);
	}
	cout << "���� �� �̸��� " << longest << endl;
}