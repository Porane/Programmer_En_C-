#include <iostream>
#include <cstdlib>
#include <cmath>
#include "CPoint.h"

using namespace std; //espace nom 

//Exemple de programme en C++

int main()
{
	CPoint ptMonPoint;

	ptMonPoint.setX(0);
	ptMonPoint.setY(0);

	std::cout << "X : " << ptMonPoint.getX() << std::endl;
	std::cout << "Y : " << ptMonPoint.getY() << std::endl;

	system("pause");

	return 0;
}