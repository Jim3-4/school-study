#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
	map<string, string> dic;

	dic.insert(make_pair("love", "사랑"));
	dic.insert(make_pair("apple", "사과"));
	dic["cherry"] = "체리";

	cout << "저장된 단어개수" << dic.size() << endl;

	string eng;
	while (true) {
		cout << "찾고싶은단어" << endl;
		getline(cin, eng);
		if (eng == "exit") break;

		if (dic.find(eng) == dic.end())
			cout << "없음";
		else
			cout << dic[eng] << endl;
	}
	cout << "종료" << endl;
}
