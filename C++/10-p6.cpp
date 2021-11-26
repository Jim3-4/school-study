#include <iostream>
#include <string>
using namespace std;
template <class T>
class MyStack {
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};

template <class T>
MyStack<T>::MyStack() {
	tos = -1;
}
template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}
template <class T>
T MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	retData = data[tos--];
	return retData;
}
class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void show() { cout << "(" << x << '.' << y << ")"; }
};

int main() {
	MyStack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;
	MyStack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>();
	p->push('a');
	cout << p->pop() << endl;
	delete p;
}