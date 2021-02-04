#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char englishtext[10000];
	int sum = 0, num = 0;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(englishtext, 10000, ';');

	for (int i = 0; i < strlen(englishtext); i++) {
		if (isalpha(englishtext[i])) { // 알파벳인지 확인
			sum += 1; // 알파벳의 개수
		}
		englishtext[i] = tolower(englishtext[i]); // 모든 알파벳을 소문자로 변환
	}
	
	cout << "총 알파벳 수 " << sum << endl << endl;

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(englishtext); j++) {
			if (englishtext[j] == (char)('a' + i)) {
				num += 1;
			}
		}
		cout << (char)('a' + i) << "(" << num << ")\t" << ": ";
		for (int k = 0; k < num; k++) {
			cout << '*';
		}
		num = 0;
		cout << "\n";
	}
}