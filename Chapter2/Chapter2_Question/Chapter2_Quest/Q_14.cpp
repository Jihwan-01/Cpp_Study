#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100]; // Ŀ���� ����
	int num; // Ŀ���� �� ��
	int sum = 0; // ����
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	
	while (sum <= 20000) {
		cout << "�ֹ�>> ";
		cin >> coffee >> num;
		if (strcmp(coffee, "����������") == 0) {
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��" << endl;
			sum += 2000 * num;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��" << endl;
			sum += 2300 * num;
		}
		else {
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��" << endl;
			sum += 2500 * num;
		}
	}

	cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
}