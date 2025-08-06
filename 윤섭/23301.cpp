#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, T; // N : 참가자 수, T : 스터디 시간
	cin >> N >> T; 

	int study[1001] = { 0 };	// 첫번째 [] 참가자 수, 두번째 [] 시간
	for (int i = 0; i < N; i++) {
		int K;	// 가능한 시간의 수
		cin >> K;

		for (int j = 0; j < K; j++) {
			int t1, t2;			// 시작 시간, 종료 시간
			cin >> t1 >> t2;

			for (int a = t1; a < t2; a++) {	// 스터디 가능 시간을 1로 표기;
				study[a]++;
			}
		}
	}

	int max_sum = 0;
	int max_t1 = 0, max_t2 = 0;
	int current_sum = 0;

	for (int i = 0; i < T; i++) current_sum += study[i];
	max_sum = current_sum;
	max_t1 = 0;
	max_t2 = T;

	for (int i = 1; i + T <= 1001; i++) {
		current_sum -= study[i - 1];
		current_sum += study[i + T - 1];

		if (current_sum > max_sum) {
			max_sum = current_sum;
			max_t1 = i;
			max_t2 = i + T;
		}
	}

	cout << max_t1 << " " << max_t2 << "\n";
}
