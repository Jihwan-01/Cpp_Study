#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;

	i = a;
	while (i <= b) { // i�� b���� �۰ų� ���� ���� �ݺ�
		sum += i;
		i++;
	}
	cout << a << "���� " << b << "���� ���� " << sum << "�̴�.";
}