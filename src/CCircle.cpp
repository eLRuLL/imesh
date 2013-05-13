/*
 * CCircle.cpp
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#include "CCircle.h"

CCircle::CCircle(int width, int height) {
	this->width = width;
	this->height = height;
}

double CCircle::area(){
	return M_PI*(width/2)*(width/2);
}

