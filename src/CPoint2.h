/*
 * CPoint2.h
 *
 *  Created on: May 13, 2013
 *      Author: elrull
 */

#ifndef CPOINT2_H_
#define CPOINT2_H_

#include "CPoint.h"

class CPoint_2: public CPoint {
public:
	int y;

	CPoint_2();
	CPoint_2(int,int);
	~CPoint_2();

	bool operator==(const CPoint_2&) const;
	CPoint_2& operator=(const CPoint_2&);
};

#endif /* CPOINT2_H_ */
