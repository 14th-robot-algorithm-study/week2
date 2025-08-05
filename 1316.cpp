#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string str;
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        cin >> str;

        int bucket[200] = { 0 }; 
        int flag = 0;

        for (int j = 0; j < str.size(); j++) {
            if (j > 0 && str[j] == str[j - 1]) continue;
            if (bucket[str[j]] == 1) { 
                flag = 1;
                break; 
            }
            bucket[str[j]] = 1;
        }

        if (flag == 0) cnt++;
    }

    cout << cnt;
}
