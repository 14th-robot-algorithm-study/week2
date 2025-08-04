#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	for (int i = 0; i < str.size(); i++) {
		str[i] -= 3;

		if (str[i] < 'A') {
			str[i] += 26;
		}
	}

	std::cout << str;

	return 0;
}
