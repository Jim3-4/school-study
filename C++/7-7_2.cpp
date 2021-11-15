#include <iostream>
#include <string>

using namespace std;
class Matrix {
	int m[4];
public:
	Matrix():Matrix(0,0,0,0){}
	Matrix(int m1, int m2, int m3, int m4) {
		m[0] = m1;
		m[1] = m2;
		m[2] = m3;
		m[3] = m4;
	}
	void show() {
		cout << "Matrix = {";
		for (int i = 0; i < 4; i++) {
			cout << m[i]<<' ';
		}
		cout << "}" << endl;
	}
	friend Matrix operator >> (Matrix m, int x[]);
	friend Matrix& operator << (Matrix& mat, int y[]);
};
Matrix operator >> (Matrix mat, int x[]) {
	for (int i = 0; i < 4; i++) {
		x[i] = mat.m[i];
	}
	return mat;
}
Matrix& operator << (Matrix& mat, int y[]) {
	for (int i = 0; i < 4; i++) {
		mat.m[i] = y[i];
	}
	return mat;
}
int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;
	for (int i = 0; i < 4; i++) {
		cout << x[i] << ' ';
	}
	cout << endl;
	b.show();
}