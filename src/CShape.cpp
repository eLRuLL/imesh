/*
 * CShape.cpp
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#include "CShape.h"

void CShape::setValues(int width,int height){
	this->width = width;
	this->height = height;
}

void CShape::setCenter(CPoint* p){
	this->center = *p;
}
