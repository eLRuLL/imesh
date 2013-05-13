/*
 * CRectangle.cpp
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#include "CRectangle.h"

CRectangle::CRectangle(int width,int height){
	this->width = width;
	this->height = height;
}

double CRectangle::area(){
	return width*height;
}

bool CRectangle::isInside(CPoint p){
	return false;
}
