#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	char filenames[50][50] = { 0 };
	for (int i = 0; i < N; i++) {
		cin >> filenames[i];
	}

	//파일명의 길이 구하기
	int length = 0;
	for (int i = 0; i < 50; i++) {
		if (filenames[0][i] == '\0') {
			break;
		}
		else {
			length++;
		}
	}

	// 체크
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < length; j++) {
			if (filenames[0][j] != filenames[i][j]) {
				filenames[0][j] = '?';
			}
		}
	}

	for (int i = 0; i < length; i++) {
		cout << filenames[0][i];
	}
	cout << '\n';

	return 0;
}