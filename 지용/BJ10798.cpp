#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	string str[5];
	vector<int> lens;

	for (int i = 0; i < 5; i++) {
		cin >> str[i];
		lens.push_back(str[i].length());
	}

	int len = *max_element(lens.begin(), lens.end());

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 5; j++) {
			if (i >= str[j].length()) cout << "";
			else cout << str[j][i];
		}
	}

	return 0;
}
