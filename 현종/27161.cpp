#include <iostream>
#include <string>
#include <vector>
using namespace std;

string clck;
int t;
bool flag = true;
int cnt = 0;
vector<int> ans_time;
vector<string> ans;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> clck >> t;
		
		if (flag) {
			cnt++;
			if (cnt > 12) {
				cnt = cnt - 12;
			}
		}
		else {
			cnt--;
			if (cnt < 1)
				cnt = cnt + 12;
		}
		ans_time.push_back(cnt);
		if (cnt == t&& clck != "HOURGLASS")
			ans.push_back("YES");
		else
			ans.push_back("NO");
		if (cnt != t&&clck == "HOURGLASS")
			flag = !flag;
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans_time[i] << " " << ans[i]<<"\n";
	}
}