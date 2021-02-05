#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int a, int b, int c);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int a, int b, int c) {
	year = a; month = b; day = c;
}

Date::Date(string s) {
	year = stoi(s.substr(0, 4));
	month = stoi(s.substr(5, 2));
	day = stoi(s.substr(7, 2));
	// string class�� substr(n, m) ��� �Լ�: �ε��� n���� m���� ���� ����
}

void Date::show() {
	cout << year << "��" << month << "��" << day << "��" << endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}