#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string str;

	while (std::getline(std::cin, str) && str != "EOI") {
		std::string line = str;
		std::transform(line.begin(), line.end(), line.begin(), ::toupper);

		if (line.find("NEMO") != std::string::npos) {
			std::cout << "Found \n";
		}
		else {
			std::cout << "Missing \n";
		}
	}

	return 0;
}
