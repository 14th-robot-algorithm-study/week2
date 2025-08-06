#include<iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	char guard_map[50][50] = { 0 };
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> guard_map[i][j];
		}
	}

	// flag를 사용할 때는 찾고자 하는 것의 반대로 true/false를 설정한다.
	// 행 별로 경비원(X) 탐색
	int count = 0;
	for (int i = 0; i < N; i++) {
		bool flag = false;
		for (int j = 0; j < M; j++) {
			if (guard_map[i][j] == 'X') {
				flag = true;
				break;
			}
		}
		if (flag == false) count++;
	}

	// 열 별로 경비원(X) 탐색
	// 
	int count1 = 0;
	for (int i = 0; i < M; i++) {
		bool flag = false;
		for (int j = 0; j < N; j++) {
			if (guard_map[j][i] == 'X') {
				flag = true;
				break;
			}
		}
		if (flag == false) count1++;
	}

	// 빈 행을 채울 때 빈 열도 하나 채울 수 있으므로,count와 count1중 큰 값을 고르기만 하면 된다.
	if (count > count1) cout << count;
	else cout << count1;
}