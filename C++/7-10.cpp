#include <iostream>
#include <string>
#include <cstring>

using namespace std; 
class Statistic {
	int* statistic;
	int size;
public:
	Statistic(int size = 0) {
		this->size = size;
		this->statistic = new int[size];
	}
	Statistic& operator <<(int x) {
		size++;
		Statistic tmp(size);
		for (int i = 0; i < size - 1; i++)
			tmp.statistic[i] = statistic[i];
		tmp.statistic[size - 1] = x;

		delete[] this->statistic;
		this->statistic = new int[size];
		for (int i = 0; i < size; i++)
			this->statistic[i] = tmp.statistic[i];
		return *this;
	}
	Statistic operator >>(int &avg) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += statistic[i];
		}
		avg = sum / size;
		return *this;
	}
	bool operator !() {
		if (size == 0) return true;
		else false;
	}
	void operator ~() {
		for (int i = 0; i < size; i++) {
			cout << statistic[i] << ' ';
		}cout << endl;
		
	}
	
};

int main() {
	Statistic stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;

	return 0;
	
}