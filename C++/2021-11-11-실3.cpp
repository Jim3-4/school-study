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
	Power operator++(int op2);
};
void Power::show() {
	cout << "kick" << kick << ", punch" << punch << endl;
}
Power Power::operator++(int op2) {
	Power tmp = *this;
	kick++;
	punch++;
	return tmp;
}

int main() {
	Power a(0, 0), b;
	a.show();
	b.show();
	b = a++;
	a.show();
	b.show();

}