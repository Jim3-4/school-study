#include <iostream>
using namespace std;

template <class T>
void print(T d[], int n) {
	for (int i = 0; i < 5; i++) {
		cout << d[i] << ' ';
	}
	cout << endl;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	double b[] = { 1.1,2.2,3.4,5.5,6 };
	print(a, 5);
	print(b, 5);
	char c[5] = { 'a','b','c','d','e' };
	print(c, 5);
}