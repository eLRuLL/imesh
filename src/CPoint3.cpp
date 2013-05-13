/*
 * CPoint3.cpp
 *
 *  Created on: May 13, 2013
 *      Author: elrull
 */

#include "CPoint3.h"

CPoint_3::CPoint_3() {
	x = y = z = 0;
}

CPoint_3::CPoint_3(int x,int y,int z){
	this->x = x;
	this->y = y;
	this->z = z;
}

CPoint_3::~CPoint_3() {
	// TODO Auto-generated destructor stub
}

bool CPoint_3::operator==(const CPoint_3 &point) const{
	return (x==point.x && y==point.y && z==point.z);
}

CPoint_3& CPoint_3::operator =(const CPoint_3& point){
	x = point.x;
	y = point.y;
	z = point.z;
	return *this;
}
