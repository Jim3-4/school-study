#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template <class T>
bool equalArray(T a[], T b[], int size) {
	for (int i = 0; i <size; i++) {
		if (a[i] != b[i]) return false; 

	}
	return true;
}
int main() {
	int x[] = { 1,2,3,4,5 };
	int y[] = { 2,3,4,3,2 };
	int z[] = { 1,2,3,4,5 };

	if (equalArray(x, y, 5))cout << "같다" << endl;
	else cout << "다르다" << endl;

	if (equalArray(x, z, 5))cout << "같다" << endl;
	else cout << "다르다" << endl;
}
