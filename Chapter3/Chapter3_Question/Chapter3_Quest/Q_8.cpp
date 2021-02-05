#include <iostream>
#include <string>
using namespace std;

class Integer { // ����ο� ������ ��� �Լ��� �ڵ����� �ζ��� �Լ��� ��.
	int num;
public:
	Integer(int a) { // ������ 1
		num = a;
	}
	Integer(string s) { // ������ 2
		num = stoi(s);
	}
	int get() {
		return num;
	}
	void set(int a) {
		num = a;
	}
	bool isEven() {
		if (num % 2 == 0) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}