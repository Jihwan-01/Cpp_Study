#include <iostream>
using namespace std;

int main() {
	int a, b; // 숫자
	char z; // 연산자
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
