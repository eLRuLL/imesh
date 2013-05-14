/*
 * CPolygon.h
 *
 *  Created on: May 13, 2013
 *      Author: elrull
 */

#ifndef CPOLYGON_H_
#define CPOLYGON_H_

#include <vector>
#include "CPoint.h"

class CPolygon {
protected:
	std::vector<CPoint*> polygon;
public:
	void setPoints(std::vector<CPoint*>&);
	std::vector<CPoint*> getPoints();
	virtual bool isInside(CPoint*)=0;
};

#endif /* CPOLYGON_H_ */
