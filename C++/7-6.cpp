#include <iostream>
#include <string>

using namespace std;
class Matrix {
	int m[2][2];
public:
	Matrix():Matrix(0,0,0,0){}
	Matrix(int m1, int m2, int m3, int m4) {
		m[0][0] = m1;
		m[0][1] = m2;
		m[1][0] = m3;
		m[1][1] = m4;
	}
	void show() {
		cout << "Matrix={";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << m[i][j] << ' ';
			}
		}
		cout << "}" << endl;
	}
	Matrix operator + (Matrix ma);
	Matrix& operator +=(Matrix ma);
	bool operator == (Matrix ma);
};
Matrix Matrix::operator + (Matrix ma) {
	Matrix mat;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j ++ ) {
			mat.m[i][j] = m[i][j] + ma.m[i][j];
		}
	}
	return mat;
}
Matrix& Matrix::operator +=(Matrix ma) {
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			m[i][j] +=ma.m[i][j];
		}
	}
	return *this;
}
bool Matrix:: operator == (Matrix ma) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (m[i][j] != ma.m[i][j]) return false;

		}
	}return true;
}
int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
	return 0;
}