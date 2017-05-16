// 2DArray-Homework.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "matrix.h"
#include <string>


int main()
{
	matrix m3, m4;
	matrix m1( 1, 2, 3, 4), m2(1, 2, 3, 4);

	//get data from user
	std::cout << "M1 Object: " << std::endl;
	m1.getData(m1);
	std::cout << "M2 Object: " << std::endl;
	m2.getData(m2);


	// funcion to print out
	std::cout << "Prinint object M1: " << std::endl;
	m1.printOut();
	
	std::cout << "Prinint object M2: " << std::endl;
	m2.printOut();

	//Overloading + operator
	std::cout << "adding M3 = M1 + M2 " << std::endl;
	m3 = m1 + m2;

	std::cout << "Prinint object M3: " << std::endl;
	m3.printOut();

	std::cout << "multiplication m3 = m1 * m2" << std::endl;
	
	m4 = m1 * m2;

	std::cout << "Prinint object M3: " << std::endl;
	m4.printOut();

	system("pause");
    return 0;
}