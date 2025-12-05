/*
 * testPoint.cpp
 *
 *  Created on: Jun 12, 2010
 *      Author: Kocher
 */

#include <iostream>
#include "Point.h"
#include <vector>


void
testPointConstructor();

void
testPointAddRemoveBeamlet();

void
testPointAddPairPoints();

void
testPoint()
{
	//testPointConstructor();

	//testPointAddBeamlet();

	testPointAddPairPoints();
}

void
testPointConstructor()
{
	std::cout << "Point class, constructor test has begun!\n";

	// default constructor
	Point* p0 = new Point();
	std::cout << (*p0) << std::endl;

	// contructor with 1 paramater
	int coorArray[] = {16,2,77};

	std::vector<int> coordinates(coorArray, coorArray + sizeof(coorArray) / sizeof(int));

	Point* p1 = new Point(coordinates);

	std::cout << (*p1) << std::endl;


	//TODO: test constructor with Cluster

	std::cout << "Point class, constructor test has ended!\n";

}

void
testPointAddRemoveBeamlet()
{
	int coor0[]={0,0,0}, coor1[] = {1,0,0}, coor2[] = {0,1,0}, coor3[] = {0,0,1};

	std::vector<int> coordinates0(coor0, coor0 + sizeof(coor0) / sizeof(int)),
					 coordinates1(coor1, coor1 + sizeof(coor1) / sizeof(int)),
					 coordinates2(coor2, coor2 + sizeof(coor2) / sizeof(int)),
					 coordinates3(coor3, coor3 + sizeof(coor3) / sizeof(int));

	Point *p0, *p1, *p2, *p3;

	p0 = new Point(coordinates0);
	p1 = new Point(coordinates1);
	p2 = new Point(coordinates2);
	p3 = new Point(coordinates3);

	Beamlet b01(p0,p1), b02(p0,p2), b03(p0,p3);

	std::cout << (*p0) << std::endl;

	p0->AddBeamlet(&b01);
	std::cout << (*p0) << std::endl;

	p0->AddBeamlet(&b02);
	std::cout << (*p0) << std::endl;

	p0->AddBeamlet(&b03);
	std::cout << (*p0) << std::endl;

	p0->RemoveBeamlet(coordinates2);
	std::cout << (*p0) << std::endl;

	p0->RemoveBeamlet(coordinates1);
	std::cout << (*p0) << std::endl;

	p0->RemoveBeamlet(coordinates3);
	std::cout << (*p0) << std::endl;

	p0->RemoveBeamlet(coordinates1);
	std::cout << (*p0) << std::endl;

}



void
testPointAddPairPoints()
{
	int coor0[] = {0,0,0}, coor1[] = {1,0,0}, coor2[] = {0,1,0}, coor3[] = {0,0,1};

	std::vector<int> coordinates0(coor0, coor0 + sizeof(coor0) / sizeof(int)),
					 coordinates1(coor1, coor1 + sizeof(coor1) / sizeof(int)),
					 coordinates2(coor2, coor2 + sizeof(coor2) / sizeof(int)),
					 coordinates3(coor3, coor3 + sizeof(coor3) / sizeof(int));

	Point *p0, *p1, *p2, *p3;

	p0 = new Point(coordinates0);
	p1 = new Point(coordinates1);
	p2 = new Point(coordinates2);
	p3 = new Point(coordinates3);



	std::cout << (*p0) << std::endl;

	p0->AddPairPoints(p1);
	std::cout << (*p0) << std::endl;

	std::list<Point *> pairPointList;

	pairPointList.push_back(p2);
	pairPointList.push_back(p3);

	p0->AddPairPoints(pairPointList);
	std::cout << (*p0) << std::endl;

}


