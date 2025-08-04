#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int cycling = N; int cycling_1; int count = 0;
	do {
		count++;
		if (cycling < 10) {
			cycling = 10 * cycling + cycling;
		}
		else {
			cycling_1 = cycling % 10 * 10 + ((cycling % 10 + cycling / 10)) % 10;
			cycling = cycling_1;
		}	
	} while (cycling != N);

	cout << count;

	return 0;
}