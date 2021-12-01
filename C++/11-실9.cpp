#include <iostream>
#include <vector>
using namespace std;



int main() {
	vector<int> v;
	int sum = 0;
	double avg = 0;
	while (true) {
		cout << "정수를 입력하세요 (0을입력하면 종료)" << endl;
		int tmp;
		cin >> tmp;
		if (!tmp) break;
		v.push_back(tmp);
		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i) << ' ';
		}
		cout << endl;
		avg += tmp;
		cout << "평균" << avg / v.size() << endl;
	}
}
