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

Oval::Oval() : Oval(1, 1) {} // Oval(int wid, int hei) 생성자 호출

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
	cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}
