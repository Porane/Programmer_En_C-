#pragma once
//Point dans un plan
class CPoint
{
private : //dans la classe elle-m�me
	//Donn�es membres de classe
	int nX;
	int nY;

	int *pnX;

protected : //dans la classe et chez ses enfants 
	
public: //accessible partt, dans la classe et � l'ext�rieur
	
	//prototypes ou d�claration

	//assesseurs
	int getX();
	int getY();

	//mutateurs
	void setX(int nX);
	void setY(int nY);

	//init
	void init(int nX, int nY);

	//constructeurs
	CPoint();
	CPoint(int nX, int nY);

	//destructeur
	~CPoint();

};

