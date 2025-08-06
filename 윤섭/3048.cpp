#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    string s1, s2;
    cin >> s1 >> s2;

    int T;
    cin >> T;

    reverse(s1.begin(), s1.end());

    vector<pair<char, int>> ants;
    for (int i = 0; i < (int)s1.size(); i++) {
        ants.push_back({ s1[i], 0 });
    }

    for (int i = 0; i < (int)s2.size(); i++) {
        ants.push_back({ s2[i], 1 });
    }


    for (int t = 0; t < T; t++) {
        for (int i = 0; i < ants.size() - 1; i++) {
            if (ants[i].second == 0 && ants[i + 1].second == 1) {
                swap(ants[i], ants[i + 1]);
                i++;
            }
        }
    }

    for (int i = 0; i < s1.size() + s2.size(); i++) {
        cout << ants[i].first;
    }
}
