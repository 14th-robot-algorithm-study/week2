#include <iostream>
using namespace std;

int main() {
	
	int rad;
	while (cin >> rad) {

		if (rad % 6 == 0 && rad <= 180) {
			cout << "Y\n";
		}
		else {
			cout << "N\n";
		}
	}

}
