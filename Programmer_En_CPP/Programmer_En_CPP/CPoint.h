#pragma once
//Point dans un plan
class CPoint
{
private : //dans la classe elle-même
	//Données membres de classe
	int nX;
	int nY;

protected : //dans la classe et chez ses enfants 
	
public: //accessible partt, dans la classe et à l'extérieur
	
	//prototypes ou déclaration

	//assesseurs
	int getX();
	int getY();

	//mutateurs
	void setX(int nX);
	void setY(int nY);

};

