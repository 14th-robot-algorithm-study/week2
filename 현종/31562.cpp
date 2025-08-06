#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

vector<string> title;
vector<string> sound;
vector<string> ask;
int bucket[1000];
int main() {
	memset(bucket, -1, sizeof(int) * 1000);
	int N, M;
	int len = 0, cnt=0;
	string tmp;
	char c;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> len;
		cin >> tmp;
		title.push_back(tmp);
		sound.push_back("");
		for (int j = 0; j < 7; j++)
		{
			cin >> c;
			if(j<3)
				sound[i] += c;
		}
	}

	for (int i = 0; i < M; i++)
	{
		ask.push_back("");
		for (int j = 0; j < 3; j++)
		{
			cin>>c;
			ask[i] += c;
		}
	}

	for (int i = 0; i < M; i++)
	{
		cnt = 0;
		for (int j = 0; j < N; j++)
		{
			if (sound[j] == ask[i]) {
				cnt++;
				if (cnt > 1) {
					bucket[i] = -2;
					break;
				}
				bucket[i] = j;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		if (bucket[i] == -1)cout << "!" << "\n";
		else if (bucket[i] == -2)cout << "?" << "\n";
		else cout << title[bucket[i]]<<"\n";
	}

}