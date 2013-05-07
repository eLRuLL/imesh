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

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;

typedef CGAL::Delaunay_triangulation_2<K> 					Delaunay;
typedef Delaunay::Edge_iterator 							Edge_iterator;
typedef Delaunay::Point										Point;
typedef Delaunay::Edge										Edge;
typedef Delaunay::Point_iterator							Point_iterator;

using namespace std;


void draw(void){
	glClearColor(0,1,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

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
}
