#include <iostream>
#include <string>
using namespace std;

class Account {
	string name; // ���� ���θ�
	int id, balance; // ���¹�ȣ, �ܾ�
public:
	Account(string s, int a, int b); // ������
	void deposit(int a); // ����
	int withdraw(int a); // ��� �ݾ� ����
	string getOwner(); // �������θ� ����
	int inquiry(); // �ܾ� ����
};

Account::Account(string s, int a, int b) {
	name = s; id = a; balance = b;
}

void Account::deposit(int a) {
	balance += a;
}

int Account::withdraw(int a) {
	balance -= a;
	return a;
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}