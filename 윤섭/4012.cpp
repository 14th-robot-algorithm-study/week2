#include <iostream>
using namespace std;
 
int N;
int map[16][16];
int minVal = 21e8;
int via[16];
 
void func(int lev, int start) {
    if (lev == N / 2) {
        int aSum = 0;
        int bSum = 0;
 
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (via[i] == 1 && via[j] == 1) {
                    aSum += map[i][j] + map[j][i];
                }
                if (via[i] == 0 && via[j] == 0) {
                    bSum += map[i][j] + map[j][i];
                }
            }
        }
 
        if (minVal > abs(aSum - bSum))minVal = abs(aSum - bSum);
        return;
    }
 
    for (int i = start; i < N; i++) {
        if (via[i] == 1) continue;
        via[i] = 1;
        func(lev + 1, i + 1);
        via[i] = 0;
    }
}
 
int main() {
    int T;
    cin >> T;
 
    for (int tc = 1; tc <= T; tc++) {
        cin >> N;
 
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> map[i][j];
            }
        }
 
        minVal = 21e8;
 
        func(0, 0);
        cout << "#" << tc << " " << minVal << "\n";
    }
}
