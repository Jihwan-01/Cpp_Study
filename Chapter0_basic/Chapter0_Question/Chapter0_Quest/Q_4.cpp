#include <iostream>
using namespace std;

int main() {
	double d[5];
	cout << "�Ǽ� 5���� �Է��ϼ���>>";
	for (int i = 0; i < 5; i++) // �Ǽ� 5���� �Է� �޾� �迭 �ȿ� ����
		cin >> d[i];

	double sum = 0.0;
	for (int j = 0; j < 5; j++) // �Ǽ� 5���� ���� ����
		sum += d[j];
	double average;
	average = sum / 5; // �Ǽ� 5���� ���

	for (int k = 0; k < 5; k++)
		cout << d[k] << " ";
	cout << "�� ��� = " << average;
}