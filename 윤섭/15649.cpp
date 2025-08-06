#include <iostream>
using namespace std;

int N, M;
int path[8];
int via[8];

void func(int lev) {
	if (lev == M) {
		for (int i = 0; i < M; i++) {
			cout << path[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < N; i++) {
		if (via[i] == 1) continue;
		via[i] = 1;
		path[lev] = i + 1;
		func(lev + 1);
		path[lev] = 0;
		via[i] = 0;
	}
}

int main() {
	cin >> N >> M;
	
	func(0);
}
