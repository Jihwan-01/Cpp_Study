#include <iostream>
using namespace std;

bool isMultiple(int a, int b); // (1) �Լ��� ���� ����

int main() { // (3) isMultiple()�� ȣ���ϴ� ��ü ���α׷�
	int a, b;
	cout << "�� ������ �Է��ϼ���>>";
	cin >> a >> b;

	if (isMultiple(a, b))
		cout << "Yes";
	else
		cout << "No";
}

bool isMultiple(int a, int b) { // (2) �Լ� �ۼ�
	if (b % a == 0)
		return true;
	else
		return false;
}