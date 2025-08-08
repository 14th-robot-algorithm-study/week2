#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int k, n, sum = 0;
		cin >> k >> n;

		int dp[15] = { 0 };
		for (int i = 1; i <= n; i++) dp[i] = i; // 0층

		for (int floor = 1; floor <= k; floor++) {
			for (int room = 1; room <= n; room++) {
				dp[room] += dp[room - 1];
				// 현재 방 = 아래층 같은 방 + 같은 층 이전 방
			}
		}

		cout << dp[n] << '\n';
	}

	

	return 0;
}
