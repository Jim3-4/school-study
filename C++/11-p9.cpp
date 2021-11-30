#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main() {
	int sum = 0;
	[&sum](int x, int y) {sum = x + y; }(2, 3);
	cout << sum;
}
