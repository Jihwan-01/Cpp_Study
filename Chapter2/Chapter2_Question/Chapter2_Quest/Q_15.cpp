#include <iostream>
using namespace std;

int main() {
	int a, b; // ����
	char z; // ������
	while (true) {
		cout << "? ";
		cin >> a >> z >> b;
		if (z == '+')
			cout << a << " " << z << " " << b << " = " << a + b << endl;
		else if (z == '-')
			cout << a << " " << z << " " << b << " = " << a - b << endl;
		else if (z == '*')
			cout << a << " " << z << " " << b << " = " << a * b << endl;
		else if (z == '/')
			cout << a << " " << z << " " << b << " = " << a / b << endl;
		else if (z == '%')
			cout << a << " " << z << " " << b << " = " << a % b << endl;
	}
}