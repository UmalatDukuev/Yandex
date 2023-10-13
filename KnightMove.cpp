#include <iostream>

int main() {
	int n = 0, m = 0;
	std::cin >> n >> m;

	if (n / m >= 2 || m / n >= 2) {
		std::cout << "0";
		return 0;
	}

	int** mas = new  int* [n];

	for (int i = 0; i < n; i++)
	{
		mas[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = 0;
		}
	}
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		std::cout << mas[i][j] << " ";
	//	} std::cout << std::endl;
	//}
//std::cout << std::endl;

	mas[0][0] = 1;
	mas[1][2] = 1;
	mas[2][1] = 1;
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		std::cout << mas[i][j] << " ";
	//	} std::cout << std::endl;
	//}
	//std::cout << std::endl;

	//for (int i = 2; i < n; i++) {
	//	for (int j = 2; j < m; j++) {
	//		mas[i][j] = mas[i - 1][j - 2] + mas[i - 2][j - 1];
	//	}
	//}

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		std::cout << mas[i][j] << " ";
	//	} std::cout << std::endl;
	//}
	for (int i = 2; i < n; i++) {
		for (int j = 2; j < m; j++) {
			if (i -2 >= 0 && j-1 >= 0)
				mas[i][j] += mas[i - 2][j - 1];
			if (i - 1 >= 0 && j - 2 >= 0)
				mas[i][j] += mas[i - 1][j - 2];
		}
	}


	std::cout << mas[n - 1][m - 1];

	for (size_t i = 0; i < n; ++i)
		delete[] mas[i];
	delete[] mas;

	return 0;
}