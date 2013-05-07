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

typedef CGAL::Exact_predicates_inexact_constructions_kernel 	K;
typedef CGAL::Delaunay_triangulation_2<K>						Delaunay;

class Smoother_2 {

private:
	int height;
	int width;
	Delaunay Triangulation;


public:
	Smoother_2();
	Smoother_2(int, int);
	virtual ~Smoother_2();

	void loadRandomPoints(int n = 1000);
	Delaunay* getTriangulation();


};

#endif /* SMOOTHER_H_ */
