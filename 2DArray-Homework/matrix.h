#pragma once
#include <string>
#include <iostream>

class matrix
{
private:
	double m[2][2];
	

public:
	matrix()
	{
		m[0][0] = 0;
		m[0][1] = 0;
		m[1][1] = 0;
		m[1][0] = 0;

	}
	matrix(double One, double Two, double Three, double Four) : m{ 1,2,3,4 } 
	{
		m[0][0] = 1;
		m[0][1] = 2;
		m[1][0] = 3;
		m[1][1] = 4;
	}
	void getData(matrix m_);
	void printOut();
	matrix operator + (matrix am) const; // add 2 matrixes
	matrix operator*(matrix am) const; // multiply 2 arrays
};

