/*
 * CCircle.h
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#ifndef CCIRCLE_H_
#define CCIRCLE_H_

#include "CShape.h"
#include <math.h>

class CCircle: public CShape{
public:
	CCircle(int, int);
	double area();
};

#endif /* CCIRCLE_H_ */
