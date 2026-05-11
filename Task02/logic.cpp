// Сумма элементов [The sum of elements]
// 
// Дана математическая квадратная матрица размером N.
// Необходимо разработать функцию (или программу), 
// которая вычисляет сумму элементов матрицы, 
// расположенных на главной и побочной диагоналях.
#include "logic.h"

int find_sum_of_main_diagonales(int** matrix, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += *(*(matrix + i) + i);
	}

	return sum;
}

int find_sum_of_second_diagonales(int** matrix, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += *(*(matrix + i) + n - 1 - i);
	}

	return sum;
}

int sum_main_and_second_diagonales_elements(int** matrix, int n) {
	if (matrix == nullptr) {
		return 0;
	}
	if (n <= 0) {
		return 0;
	}

	int sum = find_sum_of_main_diagonales(matrix, n);
	sum += find_sum_of_second_diagonales(matrix, n);
	if (n % 2 != 0) {
		sum -= *(*(matrix + n / 2) + n / 2);
	}

	return sum;
}