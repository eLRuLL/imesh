/*
 * CPolygon2.cpp
 *
 *  Created on: May 13, 2013
 *      Author: elrull
 */

#include "CPolygon2.h"

CPolygon2::CPolygon2() {
}

CPolygon2::~CPolygon2() {
}

bool CPolygon2::isInside(CPoint* point){
	int counter = 0;
	int i,N;
	N = polygon.size();
	double xinters;
	CPoint_2* p1,*p2;
	CPoint_2* p = (CPoint_2*)(point);

	p1 = (CPoint_2*)(polygon[0]);

	for(i=1; i<=N; i++){
		p2 = (CPoint_2*)(polygon[i%N]);
		if(p->y > std::min(p1->y,p2->y)){
			if(p->y <= std::max(p1->y,p2->y)){
				if(p->x <= std::max(p1->x,p2->x)){
					if(p1->y != p2->y){
						xinters = (p->y - p1->y)*(p2->x - p1->x)/(p2->y - p1->y) + p1->x;
						if(p1->x == p2->x || p->x <= xinters)
							counter++;
					}
				}
			}
		}
		p1 = p2;
	}

	return (!(counter % 2));
}
