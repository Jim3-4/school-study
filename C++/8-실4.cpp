#include <iostream>
#include <string>

using namespace std;
class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
	string c;
public:
	ColorPoint(int x, int y, string c) : Point(x, y) {
		this->c = c;
	}
	void setPoint(int x, int y) {
		move(x, y);
	}
	void setColor(string c) {
		this->c = c;
	}
	void show() {
		cout << c << "색으로" << "(" << getX() << "," << getY() << ") 위치한 점입니다.";
	}
};
int main() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
	return 0;
}#include <iostream>
#include <string>

using namespace std;
class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
	string c;
public:
	ColorPoint() : Point(0, 0) { c = "Black"; }
	ColorPoint(int x, int y, string c) : Point(x, y) {
		this->c = c;
	}
	void setPoint(int x, int y) {
		move(x, y);
	}
	void setColor(string c) {
		this->c = c;
	}
	void show() {
		cout << c << "색으로" << "(" << getX() << "," << getY() << ") 위치한 점입니다." << endl;
	}
};
int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
	return 0;
}ss