/*
 * CPoint.cpp
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#include "CPoint.h"

CPoint::CPoint() {
	x = y = z = 0;
}

CPoint::CPoint(int x, int y){
	this->x = x;
	this->y = y;
	this->z = 0;
}

CPoint::CPoint(int x, int y, int z){
	this->x = x;
	this->y = y;
	this->z = z;
}

bool CPoint::operator==(const CPoint &point) const{
	if(x==point.x && y==point.y && z==point.z){
		return true;
	}else{
		return false;
	}
}

bool CPoint::operator!=(const CPoint &point) const{
	return !(*this == point);
}

CPoint& CPoint::operator =(const CPoint& point){
	x = point.x;
	y = point.y;
	z = point.z;
	return *this;
}
