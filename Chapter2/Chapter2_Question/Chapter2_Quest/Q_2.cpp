#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << j + 1 << "x" << i + 1 << "=" << (i + 1) * (j + 1) << "	";
		}
		cout << "\n";
	}
}