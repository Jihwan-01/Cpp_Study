#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "�ι̿�>>";
	cin >> s; // �ι̿��� �Է��� ���ڿ�

	string t;
	cout << "�ٸ���>>";
	cin >> t; // �ٸ����� �Է��� ���ڿ�

	if ((s == "����" && t == "��") || (s == "����" && t == "����") || (s == "��" && t == "����"))
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if ((t == "����" && s == "��") || (t == "����" && s == "����") || (t == "��" && s == "����"))
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else
		cout << "�����ϴ�." << endl;
}