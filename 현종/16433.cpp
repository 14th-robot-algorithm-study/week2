#include <iostream>
using namespace std;

char ground[100][100];


//규칙을 찾아서 풀었음
int main() {
	int N, R, C;
	cin >> N >> R >> C;
	
	int R_remain = 0, C_remain = 0;

	R_remain = R % 2;
	C_remain = C % 2;
	
	for (int i = 0; i < N; i+=2)
	{
		for (int j = 0; j < N; j+=2)
		{
			if (R_remain == C_remain) {
				ground[i][j] = 'v';
				ground[i][j + 1] = '.';
				ground[i + 1][j] = '.';
				ground[i + 1][j + 1] = 'v';
			}
			if(R_remain != C_remain){
				ground[i][j] = '.';
				ground[i][j + 1] = 'v';
				ground[i + 1][j] = 'v';
				ground[i + 1][j + 1] = '.';
			}
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << ground[i][j];
		}
		cout << "\n";
	}
	


	
}