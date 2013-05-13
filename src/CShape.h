/*
 * CShape.h
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#ifndef CSHAPE_H_
#define CSHAPE_H_

#include "CPoint.h"

class CShape {
protected:
	int width, height;
	CPoint center;
public:
	void setValues(int,int);
};

#endif /* CSHAPE_H_ */
