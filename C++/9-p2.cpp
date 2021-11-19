#include <iostream>

using namespace std;

class Base {
public:
	virtual void f() { cout << "base"<<endl; }
};
class Drived : public Base {
public:
	virtual void f() { cout << "Drived"<<endl; }
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
