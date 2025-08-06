//3:35



#include <iostream>
#include <vector>
using namespace std;



int main() {
	int N, K, a, cnt = 0;
	bool flag = true;
	vector<int> track;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		track.push_back(a);
	}

	
	for (int i = 0; i < N - 1; i++)
	{
		if (track[i] >= track[i + 1]) {
			track[i + 1] += K;
			cnt++;
		}
	}
	for (int j = 0; j < N-1; j++)
	{
		if (track[j] >= track[j + 1]) {
			flag = false;
		}
	}

	
	if (flag)
		cout << cnt;
	else
		cout << -1;


	return 0;
}