/*
 * CPoint3.h
 *
 *  Created on: May 13, 2013
 *      Author: elrull
 */

#ifndef CPOINT3_H_
#define CPOINT3_H_

#include "CPoint2.h"

class CPoint_3: public CPoint_2 {
public:
	int z;

	CPoint_3();
	CPoint_3(int,int,int);
	virtual ~CPoint_3();

	bool operator==(const CPoint_3&) const;
	CPoint_3& operator=(const CPoint_3&);
};

#endif /* CPOINT3_H_ */
