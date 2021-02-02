#include <iostream>
using namespace std;

int addArray(int a[], int size); // 함수의 원형 선언
void makeDouble(int a[], int size); // 함수의 원형 선언
void printArray(int a[], int size); // 함수의 원형 선언

int main() {
	int n[] = { 1, 2, 3, 4, 5 }; // int n[5]로 해도 됨
	int sum = addArray(n, 5); // 배열 n과 개수 5를 매개 변수에 전달
	cout << "배열 n의 합은 " << sum << "입니다\n";

	makeDouble(n, 5); // 배열 n과 개수 5를 매개 변수에 전달
	printArray(n, 5); // 배열 n과 개수 5를 매개 변수에 전달
}

int addArray(int a[], int size) { // 배열과 개수를 전달받아 합을 리턴하는 함수
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += a[i];
	return sum;
}

void makeDouble(int a[], int size) { // 배열의 값을 두 배로 증가시키는 함수
	int i;
	for (i = 0; i < size; i++)
		a[i] *= 2; // 원소의 값을 2배 증가
}

void printArray(int a[], int size) { // 배열을 출력하는 함수
	int i;
	for (i = 0; i < size; i++)
		cout << a[i] << ' '; // 원소 출력
	cout << "\n";
}