#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;		// 2차원 평면 위의 점 N개
	cin >> N;

	vector<pair<int, int>> point(N);

	for (int i = 0; i < N; i++) {
		cin >> point[i].first >> point[i].second;
	}

	sort(point.begin(), point.end());

	for (int i = 0; i < N; i++) {
		cout << point[i].first << " " << point[i].second << '\n';
	}
}
