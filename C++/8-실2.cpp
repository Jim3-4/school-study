#include <iostream>
#include <string>

using namespace std;


class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius=0, string name=" ") : Circle(radius) {
		this->name = name;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void show() {
		cout << "반지름이 " << getRadius() << "인 와플";
	}
};
int main() {
	NamedCircle pizza[5];
	cout << "5개의 정수반지름과 원의 이름을 입력하세요"<<endl;
	int radius;
	string name;
	for (int i = 0; i < 5; i++) {
		cout << i+1<<">>";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
		cout << endl;
	}
	int maxArea = 0, maxind=0;
	for (int i = 0; i < 5; i++) {
		if (pizza[i].getArea() > maxArea) {
			maxArea = pizza[i].getArea();
			maxind = i;
		}
	}
	cout << "면적이 가장 큰 피자는 " << pizza[maxind].getName() << "입니다.";
	return 0;
}