#include "matrix.h"
#include <iostream>


void matrix::printOut()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << m[i][j] << std::endl;
		}
	}
}

matrix matrix::operator+(matrix am) const
{
	matrix temp;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			temp.m[i][j] = m[i][j] + am.m[i][j];
		}
	}

	return temp;
}
void matrix::getData(matrix m_)
{
	std::cout << "Please enter value for arrya" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << "Plese provide " << j+1 << " value: ";
			std::cin >> m[i][j];
		}
	}

}
matrix matrix::operator*(matrix am) const
{
	matrix temp;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			temp.m[i][j] = m[i][j] * am.m[i][j];
		}
	}

	return temp;
}
