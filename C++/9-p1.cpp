#include <iostream>

using namespace std;

class Base{
public: 
	void f() { cout << "base"; }
};
class Drived : public Base {
public:
	void f() { cout << "Drived"; }
};
int main() {
	Drived d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();
	return 0;
}
