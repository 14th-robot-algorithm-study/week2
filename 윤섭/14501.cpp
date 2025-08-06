#include <iostream>
using namespace std;

int N;
int T[15];
int P[15];
int maxSum = 0;

void func(int day, int sum) {
    if (day > N) return; 
    if (day == N) {       
        if (sum > maxSum) maxSum = sum;
        return;
    }

    func(day + T[day], sum + P[day]);
    func(day + 1, sum);
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> T[i] >> P[i];
    }

    func(0, 0);
    cout << maxSum;
}
