#include <iostream>
using namespace std;

int map[1001][1001];
int sum[101];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int x = x1; x < x1+x2; x++) {
			for (int y = y1; y < y1+y2; y++) {
				map[y][x] = i;
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 1001; j++) {
			for (int k = 0; k < 1001; k++) {
				if (map[j][k] == i)sum[i]++;
			}
		}
		cout << sum[i] << "\n";
	}
}
