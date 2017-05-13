// 2DArray-Homework.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "matrix.h"
#include <string>


int main()
{
	matrix m1( 12.34, John, Dogart, 65.45 ), m2(10, Merry, Berry, 34.25);
	matrix m3;

	//get data from user
	m1.getData(m1);
	m2.getData(m2);


	// funcion to print out
	m1.printOut();
	m2.printOut();
	//Overloading + operator
	m3 = m1 + m2;

	m3.printOut();

	system("pause");
    return 0;
}

int employee_, std::string name_, std::string surname_, double rate_)