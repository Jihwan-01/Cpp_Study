#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char englishtext[10000];
	int sum = 0, num = 0;
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(englishtext, 10000, ';');

	for (int i = 0; i < strlen(englishtext); i++) {
		if (isalpha(englishtext[i])) { // ���ĺ����� Ȯ��
			sum += 1; // ���ĺ��� ����
		}
		englishtext[i] = tolower(englishtext[i]); // ��� ���ĺ��� �ҹ��ڷ� ��ȯ
	}
	
	cout << "�� ���ĺ� �� " << sum << endl << endl;

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(englishtext); j++) {
			if (englishtext[j] == (char)('a' + i)) {
				num += 1;
			}
		}
		cout << (char)('a' + i) << "(" << num << ")\t" << ": ";
		for (int k = 0; k < num; k++) {
			cout << '*';
		}
		num = 0;
		cout << "\n";
	}
}