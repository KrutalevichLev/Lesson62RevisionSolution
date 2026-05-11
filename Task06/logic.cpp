// Минимальный максимум среди всех локальных максимумов
// [The minimum maximum among all local maxima].
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// находит значение локального максимума, который является
// минимальным среди всех локальных максимумов. 

//#include "logic.h"
//
//int* find_local_maximum(int** matrix, int n, int m) {
//
//
//
//	for (int i = 1; i < n - 1; i++)
//	{
//		for (int j = 1; j < m - 1; j++)
//		{
//			if ((*(*matrix + j) + i) > (*(*matrix + j - 1) + i) &&
//				(*(*matrix + j) + i) > (*(*matrix + j + 1) + i) &&
//				(*(*matrix + j) + i) > (*(*matrix + j) + i - 1) &&
//				(*(*matrix + j) + i) > (*(*matrix + j) + i + 1)) {
//
//			}
//		}
//	}
//
//	for (int j = 1; j < m - 1; j++)
//	{
//		if ((*(*matrix + j)) > (*(*matrix + j + 1)) &&
//			(*(*matrix + j)) > (*(*matrix + j - 1)) &&
//			(*(*matrix + j)) > (*(*matrix + j) + 1)) {
//
//		}
//	}
//
//	for (int j = 1; j < m - 1; j++)
//	{
//		if ((*(*matrix + j)) > (*(*matrix + j + 1)) &&
//			(*(*matrix + j)) > (*(*matrix + j - 1)) &&
//			(*(*matrix + j)) > (*(*matrix + j) + n - 1)) {
//
//		}
//	}
//
//	for (int i = 1; i < n - 1; i++)
//	{
//		if ((*(*matrix) + i) > (*(*matrix) + i - 1) &&
//			(*(*matrix) + i) > (*(*matrix + 1) + i) &&
//			(*(*matrix) + i) > (*(*matrix) + i + 1)) {
//
//		}
//	}
//
//	for (int i = 1; i < n - 1; i++)
//	{
//		if ((*(*matrix) + i) > (*(*matrix) + i - 1) &&
//			(*(*matrix) + i) > (*(*matrix - 1) + i) &&
//			(*(*matrix) + i) > (*(*matrix) + i + 1)) {
//
//		}
//	}
//
//	if ((*(*matrix)) > (*(*matrix) + 1) &&
//		(*(*matrix)) > (*(*matrix + 1))) {
//
//	}
//
//	if ((*(*matrix) + n) > (*(*matrix + n - 1)) &&
//		(*(*matrix) + n) > (*(*matrix + n + 1))) {
//
//	}
//
//	if ((*(*matrix)) > (*(*matrix) + 1) &&
//		(*(*matrix)) > (*(*matrix ) +1)) {
//
//	}
//
//	if ((*(*matrix) + n) > (*(*matrix + n - 1)) &&
//		(*(*matrix) + n) > (*(*matrix + n + 1))) {
//
//	}
//
//}
//
//int get_min_maximum(int** matrix, int n, int m) {
//	return 0;
//}
//
//
#include "logic.h"

int get_min_maximum(int** matrix, int n, int m) {
	int min_max = 2147483647;
	bool found = false;


	if (n < 3 || m < 3) {
		return -0;
	}

	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < m - 1; j++) {
			int current = matrix[i][j];

			if (current > matrix[i - 1][j - 1] &&
				current > matrix[i - 1][j] &&
				current > matrix[i - 1][j + 1] &&
				current > matrix[i][j - 1] &&
				current > matrix[i][j + 1] &&
				current > matrix[i + 1][j - 1] &&
				current > matrix[i + 1][j] &&
				current > matrix[i + 1][j + 1])
			{

				if (current < min_max) {
					min_max = current;
					found = true;
				}
			}
		}
	}

	return found ? min_max : -0;
}
