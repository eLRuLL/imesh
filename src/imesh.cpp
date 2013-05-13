//============================================================================
// Name        : imesh.cpp
// Author      : eLRuLL
// Version     :
// Copyright   : Open-Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include <string>
#include <GL/glut.h>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Projection_traits_xy_3.h>
#include <CGAL/Delaunay_triangulation_2.h>

#include "Smoother_2.h"
#include "CRectangle.h"
#include "CPoint2.h"

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;

typedef CGAL::Delaunay_triangulation_2<K> 					Delaunay;
typedef Delaunay::Edge_iterator 							Edge_iterator;
typedef Delaunay::Point										Point;
typedef Delaunay::Edge										Edge;
typedef Delaunay::Point_iterator							Point_iterator;

using namespace std;


int main(int argc, char** argv) {

	Smoother_2 smother;
	smother.loadRandomPoints();

	Delaunay* Tri = smother.getTriangulation();
	int i=0;
	for(Point_iterator pit = Tri->points_begin(); pit != Tri->points_end(); pit++){
		i++;
		Point p = (*pit);
		printf("%d: %d %d\n",i,(int)(p.x()),(int)(p.y()));
	}

	CShape* shape = new CRectangle(3,3);
	shape->setCenter(new CPoint_2(1,1));
	cout<<shape->isInside(new CPoint_2(1,1))<<endl;

	return 0;
}
