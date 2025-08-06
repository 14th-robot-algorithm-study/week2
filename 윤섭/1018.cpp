#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    char board[50][50];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    int answer = 1000;

    for (int x = 0; x <= M - 8; x++) {
        for (int y = 0; y <= N - 8; y++) {
            int cntW = 0; 
            int cntB = 0; 
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                  
                    if ((i + j) % 2 == 0) {
                        if (board[x + i][y + j] != 'W') cntW++;
                        if (board[x + i][y + j] != 'B') cntB++;
                    }
                    else {
                        if (board[x + i][y + j] != 'B') cntW++;
                        if (board[x + i][y + j] != 'W') cntB++;
                    }
                }
            }
            answer = min({ answer, cntW, cntB });
        }
    }

    cout << answer;
}
