/*
 * CPoint.h
 *
 *  Created on: May 12, 2013
 *      Author: elrull
 */

#ifndef CPOINT_H_
#define CPOINT_H_

class CPoint {
public:
	int x;
	CPoint();
	CPoint(int x);

	bool operator==(const CPoint&) const;
	bool operator!=(const CPoint&) const;
	CPoint& operator=(const CPoint&);
};

#endif /* CPOINT_H_ */
