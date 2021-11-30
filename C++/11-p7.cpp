#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main() {
	auto love = [](string x, string y) {
		cout << x << y << endl; };

	love("애플", "너");
}
