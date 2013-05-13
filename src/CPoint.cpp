/*
 * CPoint.cpp
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#include "CPoint.h"

CPoint::CPoint() {
	x = 0;
}

CPoint::CPoint(int x){
	this->x = x;
}

bool CPoint::operator==(const CPoint &point) const{
	return (x==point.x);
}

bool CPoint::operator!=(const CPoint &point) const{
	return !(*this == point);
}

CPoint& CPoint::operator =(const CPoint& point){
	x = point.x;
	return *this;
}
