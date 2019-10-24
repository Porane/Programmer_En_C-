#include <iostream>
#include <cstdlib>
#include <cmath>
#include "CPoint.h"

using namespace std; //espace nom 

//Exemple de programme en C++

int main()
{
	CPoint ptMonPoint;
	CPoint ptMonPoint2(10, 95);

	ptMonPoint.setX(0);
	ptMonPoint.setY(0);

	std::cout << "X : " << ptMonPoint.getX() << std::endl;
	std::cout << "Y : " << ptMonPoint.getY() << std::endl;

	ptMonPoint.init(0, 0);

	system("pause");

	return 0;
}