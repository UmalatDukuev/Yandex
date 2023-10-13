#include <iostream>

int main() {
	int troom = 0, tcond = 0;
	std::string mode = "";
	std::cin >> troom >> tcond;
	std::cin >> mode;

	if (mode == "freeze") {
		if (troom > tcond)
			std::cout << tcond;
		else
			std::cout << troom;
	}
	if (mode == "heat") {
		if (troom < tcond)
			std::cout << tcond;
		else
			std::cout << troom;
	}	
	if (mode == "auto") {
		std::cout << tcond;
	}	
	if (mode == "fan") {
		std::cout << troom;
	}
	return 0;
}