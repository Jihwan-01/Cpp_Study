class Box {
	int width, height;
	char fill; // 박스의 내부를 채우는 문자
public:
	Box(int w, int h) { setSize(w, h); fill = '*'; }
	void setFill(char f) { fill = f; }
	void setSize(int w, int h) { width = w; height = h; }
	void draw(); // 박스 그리기
};