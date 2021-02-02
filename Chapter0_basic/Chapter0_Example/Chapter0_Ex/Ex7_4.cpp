#include <iostream>
using namespace std;

bool equalArray(int* p, int* q, int size); // 함수의 원형 선언

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 1,2,3,4,5 };

	if (equalArray(a, b, 5))
		cout << "arrays equal" << "\n";
	else
		cout << "arrays not equal" << "\n";
}

bool equalArray(int* p, int* q, int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (*p != *q)
			return false;
		p++; // p는 배열 a의 다음 원소를 가리킴
		q++; // q는 배열 b의 다음 원소를 가리킴
	}
	return true;
}
