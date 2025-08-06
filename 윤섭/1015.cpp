#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) v.push_back({ A[i], i });
    sort(v.begin(), v.end()); 

    for (int rank = 0; rank < N; rank++) {
        int idx = v[rank].second;
        P[idx] = rank;
    }

    for (int i = 0; i < N; i++) {
        cout << P[i];
        if (i < N - 1) cout << " ";
    }
}
