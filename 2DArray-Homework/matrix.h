#pragma once
#include <string>

class matrix
{
private:
	double m[2][2];
	int employee;
	std::string name;
	std::string surname;
	double rate;

public:
	matrix()
	{
		m[2][2] = { 0 };
	}
	matrix(int employee_, std::string name_, std::string surname_, double rate_) : employee(employee_), name(name_), surname(surname), rate(rate_)
	{}
	void getData(matrix m_);
	//void addMatrix(double m1[2][2], double m2[2][2]);
	void printOut();
	matrix operator + (matrix am) const; // add 2 matrixes
};

