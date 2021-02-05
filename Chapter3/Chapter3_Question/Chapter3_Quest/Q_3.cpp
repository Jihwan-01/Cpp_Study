#include <iostream>
#include <string>
using namespace std;

class Account {
	string name; // 계좌 주인명
	int id, balance; // 계좌번호, 잔액
public:
	Account(string s, int a, int b); // 생성자
	void deposit(int a); // 저금
	int withdraw(int a); // 출금 금액 리턴
	string getOwner(); // 계좌주인명 리턴
	int inquiry(); // 잔액 리턴
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
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}