/*
 * CRectangle.h
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#ifndef CRECTANGLE_H_
#define CRECTANGLE_H_

#include "CShape.h"

class CRectangle:public CShape{
public:
	CRectangle(int, int);

	double area();
	bool isInside(CPoint);
};

#endif /* CRECTANGLE_H_ */
