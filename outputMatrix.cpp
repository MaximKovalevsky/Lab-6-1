#include <iostream>
#include "outputMatrix.hpp"
#include "obrabotkaMatrix.hpp"
namespace oM
{
	void outputMatrix(int matrix[100][100], int n, int n1)//������� ��� ������ �������
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << obM::countOfPrimeNumbers(matrix, n, n1, i) << " <- ���������� ������� ����� � ������| ";
			for (int j = 0; j < n1; j++)
				std::cout << matrix[i][j] << "\t";
			std::cout << std::endl;
		}
	}
}