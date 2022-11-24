#include <iostream>
#include "obrabotkaMatrix.hpp"

namespace obM
{
	int maxNumberInMatrix(int matrix[100][100], int n, int n1) //функция для нахождения максимального числа в матрице
	{
		int max = matrix[0][0];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n1; j++)
			{
				if (max < matrix[i][j])
					max = matrix[i][j];

			}
		}
		return max;


	}
	int countOfPrimeNumbers(int matrix[100][100], int n, int n1, int stroka)//функция для нахождения простого числа в строке
	{
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			cnt = 0;
			for (int j = 0; j < n; j++)
			{
				int g = matrix[i][j];
				int k;
				for (k = 2; k * k <= g; k++)
					if (g % k == 0) 
						break;
				if (k * k > g && g > 1)
					cnt++;
			}
			if (i == stroka)
				return cnt;
		}
	}
	void sort(int matrix[100][100], int n, int n1)//функция для сортировки строк матрицы по убыванию количества простых чисел в строке
	{
		for (int i = 0; i < n - 1; i += 1)
		{
			for (int k = i + 1; k < n; k += 1)
			{
				if (countOfPrimeNumbers(matrix, n, n1, i) < countOfPrimeNumbers(matrix, n, n1, k))
				{
					std::swap(matrix[i], matrix[k]);

				}
			}
		}

	}
	int countOfMaxNumberCheck(int matrix[100][100], int n, int n1)//функция для проверки условия задачи
	{
		int c = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n1; j++)
			{
				if (maxNumberInMatrix(matrix, n, n1) == matrix[i][j])
				{
					c += 1;
				}

			}
		}
		return c;
	}
}