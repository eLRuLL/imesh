/*
 * CPoint2.cpp
 *
 *  Created on: May 13, 2013
 *      Author: elrull
 */

#include "CPoint2.h"

CPoint_2::CPoint_2() {
	x = y = 0;
}

CPoint_2::CPoint_2(int x,int y){
	this->x = x;
	this->y = y;
}

CPoint_2::~CPoint_2() {

}

bool CPoint_2::operator==(const CPoint_2 &point) const{
	return (x==point.x && y==point.y);
}

CPoint_2& CPoint_2::operator =(const CPoint_2& point){
	x = point.x;
	y = point.y;
	return *this;
}
