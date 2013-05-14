/*
 * Smoother.h
 *
 *  Created on: May 6, 2013
 *      Author: elrull
 */

#ifndef SMOOTHER_H_
#define SMOOTHER_H_

#include <stdlib.h>
#include <time.h>

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Delaunay_triangulation_2.h>

#include "CShape.h"

typedef CGAL::Exact_predicates_inexact_constructions_kernel 	K;
typedef CGAL::Delaunay_triangulation_2<K>						Delaunay;

class Smoother_2 {

private:
	int height;
	int width;
	Delaunay Triangulation;
	CShape* shape;

public:
	Smoother_2();
	Smoother_2(int, int);
	virtual ~Smoother_2();

	void loadRandomPoints(int n = 1000);
	Delaunay* getTriangulation();

	void setShape(CShape*);
	CShape* getShape(){
		return shape;
	}
};

#endif /* SMOOTHER_H_ */
