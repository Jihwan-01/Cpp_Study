#include <iostream>
using namespace std;

int main() {
	int score;

	cout << "������ �Է��ϼ���>>";
	cin >> score;

	if (score > 100 || score < 0) {
		cout << "�߸��� ���� �Դϴ�";
		return 0;
	}
	
	if (score >= 90) // 90�̻� 100����
		cout << "a �Դϴ�";
	else if (score >= 80) // 80�̻� 90����
		cout << "b �Դϴ�";
	else if (score >= 70) // 70�̻� 80����
		cout << "c �Դϴ�";
	else if (score >= 60) // 60�̻� 70����
		cout << "d �Դϴ�";
	else // 0�̻� 59����
		cout << "f �Դϴ�";
}