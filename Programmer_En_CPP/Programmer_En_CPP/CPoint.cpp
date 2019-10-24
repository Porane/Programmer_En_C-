#include "CPoint.h"
#include <stdlib.h>
int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}

void CPoint::setX(int nX)
{
	this->nX = nX;
}

void CPoint::setY(int nY)
{
	this->nY = nY;
}

void CPoint::init(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
	this->pnX = new int;
	*pnX = 0;
}

CPoint::CPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::~CPoint()
{
	delete pnX;
}
