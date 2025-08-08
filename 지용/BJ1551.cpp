#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	cin.ignore(); // 개행 문자 무시

	string line;
	getline(cin, line); // 라인 단위로 입력 받기

	stringstream ss(line);
	vector<int> s;
	int num;
	char comma;

	while (ss >> num) {
		s.push_back(num);
		ss >> comma; // 쉼표 무시
	}

	for (int i = 0; i < k; i++) {
		vector<int> s2;
		for (int j = 0; j < s.size() - 1; j++) {
			s2.push_back(s[j + 1] - s[j]);
		}
		s = s2; // 다음 단계 수열로 갱신
	}

	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		if (i != s.size() - 1) cout << ",";
	}

	return 0;
}
