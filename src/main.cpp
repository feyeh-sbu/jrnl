#include <iostream>
#include <string>

std::string prompt() {
	return "jrnl> ";
}

int main() {
	std::string input;
	while (true) {
		std::cout << prompt();
		std::getline(std::cin, input);
	}
}