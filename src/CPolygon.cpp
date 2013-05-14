/*
 * CPolygon.cpp
 *
 *  Created on: May 13, 2013
 *      Author: elrull
 */

#include "CPolygon.h"

void CPolygon::setPoints(std::vector<CPoint*>& points){
	this->polygon = points;
}

std::vector<CPoint*> CPolygon::getPoints(){
	return polygon;
}
