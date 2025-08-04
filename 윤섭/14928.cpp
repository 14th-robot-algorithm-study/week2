#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    long long result = 0;

    for (int i = 0; i < N.size(); i++) {
        result = (result * 10 + (N[i] - '0')) % 20000303;
    }

    cout << result;
}
