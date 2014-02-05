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

#include "CPolygon2.h"
#include "CPoint2.h"

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;

typedef CGAL::Delaunay_triangulation_2<K> 					Delaunay;
typedef Delaunay::Edge_iterator 							Edge_iterator;
typedef Delaunay::Point										Point;
typedef Delaunay::Edge										Edge;
typedef Delaunay::Point_iterator							Point_iterator;

using namespace std;


int main(int argc, char** argv) {


//	Delaunay* Tri = smother.getTriangulation();
/*	int i=0;
	for(Point_iterator pit = Tri->points_begin(); pit != Tri->points_end(); pit++){
		i++;
		Point p = (*pit);
		printf("%d: %d %d\n",i,(int)(p.x()),(int)(p.y()));
	}
*/
	//CPoint* p = new CPoint_2();

	CPolygon* poli = new CPolygon2();
	vector<CPoint*> points;
	points.push_back(new CPoint_2(5,0));
	points.push_back(new CPoint_2(4,0));
	points.push_back(new CPoint_2(3,0));
	points.push_back(new CPoint_2(2,0));
	points.push_back(new CPoint_2(1,0));
	points.push_back(new CPoint_2(0,0));


	points.push_back(new CPoint_2(0,1));
	points.push_back(new CPoint_2(0,2));
	points.push_back(new CPoint_2(0,3));
	points.push_back(new CPoint_2(0,4));

	points.push_back(new CPoint_2(1,4));
	points.push_back(new CPoint_2(2,4));
	points.push_back(new CPoint_2(3,4));
	points.push_back(new CPoint_2(4,4));
	points.push_back(new CPoint_2(5,4));

	points.push_back(new CPoint_2(5,3));
	points.push_back(new CPoint_2(5,2));
	points.push_back(new CPoint_2(5,1));
	points.push_back(new CPoint_2(5,0));



	poli->setPoints(points);
	cout<<"inside? = "<<poli->isInside(new CPoint_2(1,1))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(1,2))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(1,3))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(2,1))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(2,2))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(2,3))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(3,1))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(3,2))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(3,3))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(4,1))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(4,2))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(4,3))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(5,3))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(5,2))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(1,4))<<endl;
	/*cout<<"-------"<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(5,0))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(4,0))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(3,0))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(2,0))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(1,0))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(0,0))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(0,1))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(0,2))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(0,3))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(0,4))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(1,4))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(2,4))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(3,4))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(4,4))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(5,4))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(5,3))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(5,2))<<endl;
	cout<<"inside? = "<<poli->isInside(new CPoint_2(5,1))<<endl;
	*/
	//cout<<"inside? = "<<poli->isInside(new CPoint_2(5,1))<<endl;

	return 0;
}
