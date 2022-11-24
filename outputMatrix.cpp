#include <iostream>
#include "outputMatrix.hpp"
#include "obrabotkaMatrix.hpp"
namespace oM
{
	void outputMatrix(int matrix[100][100], int n, int n1)//функция для вывода матрицы
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << obM::countOfPrimeNumbers(matrix, n, n1, i) << " <- Количество простых чисел в строке| ";
			for (int j = 0; j < n1; j++)
				std::cout << matrix[i][j] << "\t";
			std::cout << std::endl;
		}
	}
}