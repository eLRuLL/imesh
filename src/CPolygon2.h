/*
 * CPolygon2.h
 *
 *  Created on: May 13, 2013
 *      Author: elrull
 */

#ifndef CPOLYGON2_H_
#define CPOLYGON2_H_

#include "CPolygon.h"
#include "CPoint2.h"
#include <algorithm>

class CPolygon2: public CPolygon {
public:
	CPolygon2();
	~CPolygon2();

	bool isInside(CPoint*);
};

#endif /* CPOLYGON2_H_ */
