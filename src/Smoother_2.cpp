/*
 * Smoother.cpp
 *
 *  Created on: May 6, 2013
 *      Author: elrull
 */

#include "Smoother_2.h"

Smoother_2::Smoother_2() {
	this->shape = NULL;
	height = width = 1000;
}

Smoother_2::Smoother_2(int height,int width){
	this->shape = NULL;
	this->height = height;
	this->width = width;
}

Smoother_2::~Smoother_2() {
}

void Smoother_2::loadRandomPoints(int n){
	srand(time(NULL));
	int r_x,r_y;
	while(n--){
		r_x = rand()%this->height;
		r_y = rand()%this->width;
		this->Triangulation.insert(Delaunay::Point(r_x,r_y));
	}
}

Delaunay* Smoother_2::getTriangulation(){
	return &(this->Triangulation);
}

void Smoother_2::setShape(CShape* shape){
	this->shape = shape;
}
