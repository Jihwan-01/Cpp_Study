#include <iostream>
using namespace std;

class Oval {
	int width, height;
public:
	Oval(int wid, int hei);
	Oval();
	void show();
	void set(int w, int h);
	int getWidth();
	int getHeight();
	~Oval();
};

Oval::Oval() : Oval(1, 1) {} // Oval(int wid, int hei) ������ ȣ��

Oval::Oval(int wid, int hei) {
	width = wid; height = hei;
}

void Oval::set(int w, int h) {
	width = w; height = h;
}

void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() {
	return width;
}

int Oval::getHeight() {
	return height;
}

Oval::~Oval() {
	cout << "Oval �Ҹ� : width = " << width << ", height = " << height << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}