#include <iostream>
#include <vector>
using namespace std;

int bucket[101][3];
int a[200][4];
int main() {
	int N;
	cin >> N;

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
			bucket[a[i][j]][j]++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (bucket[a[i][j]][j] > 1) {
				a[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += a[i][j];
		}
		cout << sum << "\n";
	}
	
	return 0;
}