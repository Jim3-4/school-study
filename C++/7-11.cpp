#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class Stack {
	int s[100];
	int top;
public:
	Stack() { top = -1; }
	Stack& operator << (int x) {
		s[++top] = x;
		return *this;
	}
	Stack& operator >> (int &x) {
		x = s[top--];
		return *this;
	}
	bool operator !() {
		if (top == -1)return true;
		else return false;
 	}
};
int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;

	return 0;
}