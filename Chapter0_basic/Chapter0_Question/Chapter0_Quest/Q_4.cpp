#include <iostream>
using namespace std;

int main() {
	double d[5];
	cout << "실수 5개를 입력하세요>>";
	for (int i = 0; i < 5; i++) // 실수 5개를 입력 받아 배열 안에 저장
		cin >> d[i];

	double sum = 0.0;
	for (int j = 0; j < 5; j++) // 실수 5개의 합을 구함
		sum += d[j];
	double average;
	average = sum / 5; // 실수 5개의 평균

	for (int k = 0; k < 5; k++)
		cout << d[k] << " ";
	cout << "의 평균 = " << average;
}