#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> input;
	int flag = true;
	int cnt = 0;
	while (true) {
		int a = 1;
		input.clear();
		for (int i = 0; a != 0; i++)
		{
			cin >> a;
			if (a == -1) {
				flag = false;
				break;
			}
			if (a == 0)
				break;
			input.push_back(a);

		}
		//종료되는 시점을 정확히 해야함
		if (!flag)
			return 0;
		sort(input.begin(), input.end());
		cnt = 0;
		for (int i = 0; i < input.size(); i++)
		{
			for (int j = i + 1; j < input.size(); j++)
			{
				if (2 * input[i] == input[j]) {
					cnt++;
					break;
				}

			}
		}
		cout << cnt << '\n';
	}
}