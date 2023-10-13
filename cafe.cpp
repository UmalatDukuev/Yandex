#include <iostream>

int main() {

	int n = 0, numOfCupons = 0;
	std::cin >> n;
	int* prices = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> prices[i];

	}
	return 0;
}