#include <iostream>
using namespace std;

void swapArray(int* p, int* q, int size); // p, q는 배열을 가리키고, size는 배열의 크기를 가리킴
void printArray(int* p, int size); // p는 배열을 가리키고, size는 배열의 크기를 가리킴

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 9,8,7,6,5 };

	cout << "배열 a = ";
	printArray(a, 5);
	cout << "배열 b = ";
	printArray(b, 5);

	cout << "swapArray() 실행..." << "\n";
	swapArray(a, b, 5);

	cout << "배열 a = ";
	printArray(a, 5);
	cout << "배열 b = ";
	printArray(b, 5);
}

void swapArray(int* p, int* q, int size) {
	for (int i = 0; i < size; i++) {
		int otherlist = *p;
		*p = *q;
		*q = otherlist;
		p++;
		q++;
	}
}

void printArray(int* p, int size) {
	for (int j = 0; j < size; j++)
		cout << p[j] << " ";
	cout << "\n";
}