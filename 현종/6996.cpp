#include <iostream>
#include <string>
using namespace std;

int bucket[25];
string A[100], B[100];
int ans[100] = { 0 };
int main() {
	int n;
	cin >> n;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i] >> B[i];
		if (A[i].length() != B[i].length()) {
			continue;
		}
		for (int j = 0; j < A[i].length(); j++)
		{
			bucket[A[i][j] - 'a']++;
		}

		for (int j = 0; j < A[i].length(); j++)
		{
			bucket[B[i][j] - 'a']--;
		}
		for (int j = 0; j < 25; j++)
		{
			if (bucket[j] != 0)
			{
				flag = false;
				break;
			}
		}
		if (flag) {
			ans[i]++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if(ans[i])
			cout << A[i] << " & " << B[i] << " are anagrams.\n";
		else
			cout << A[i] << " & " << B[i] << " are NOT anagrams.\n";
	}
	return 0;
}
