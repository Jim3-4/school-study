#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main() {
	double pi = 3.14;
	auto calc = [pi](int r)->double {return pi * r * r; };

}
