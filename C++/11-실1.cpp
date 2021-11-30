#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template <class T>
T biggest(T a[], int size) {
	T big = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] > big) big = a[i];

	}
	return big;
}
int main() {
	int x[] = { 1,2,3,4,5 };
	cout << biggest(x,5) << endl;

	double y[] = { 1.2 ,3.3, 4.5, 5.5,6.6 };
	cout << biggest(y, 5) << endl;
	
	char z[] = { 'a','b','c','d','e' };
	cout << biggest(z, 5) << endl;
}