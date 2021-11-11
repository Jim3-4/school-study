#include <iostream>
using namespace std;
#include <string>

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator++(int op2);
};
void Power::show() {
	cout << "kick" << kick << ", punch" << punch << endl;
}
Power& Power::operator++(int op2) {
	kick++;
	punch++;
	return *this;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++;

	b.show();
}