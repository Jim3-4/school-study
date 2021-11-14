#include <iostream>
#include <string>

using namespace std;
class Color {
	int red, green, blue;
public:
	Color() { Color(0, 0, 0); }
	Color(int a, int b, int c) {
		this->red = a; this->green = b; this->blue = c;
	}
	void show() { cout << red << green << blue; }
	friend Color operator + (Color a, Color c);
	friend bool operator == (Color a, Color c);
};
Color operator+ (Color a, Color c) {
	Color tmp;
	tmp.red = a.red + c.red;
	tmp.green = a.green + c.green;
	tmp.blue = a.blue + c.blue;
	return tmp;
}
bool operator == (Color a, Color c) {
	if (a.red == c.red && a.green == c.green && a.blue == c.blue)return true;
	else return false;
}
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;
	return 0;
}