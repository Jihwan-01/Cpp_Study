#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "로미오>>";
	cin >> s; // 로미오가 입력한 문자열

	string t;
	cout << "줄리엣>>";
	cin >> t; // 줄리엣이 입력한 문자열

	if ((s == "가위" && t == "보") || (s == "바위" && t == "가위") || (s == "보" && t == "바위"))
		cout << "로미오가 이겼습니다." << endl;
	else if ((t == "가위" && s == "보") || (t == "바위" && s == "가위") || (t == "보" && s == "바위"))
		cout << "줄리엣이 이겼습니다." << endl;
	else
		cout << "비겼습니다." << endl;
}