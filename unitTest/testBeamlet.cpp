/*
 * testBeamlet.cpp
 *
 *  Created on: Jun 12, 2010
 *      Author: Kocher
 */

#include <iostream>
#include "Beamlet.h"

void
testBeamletConstructor();

void
testBeamletSetters();

void testBeamlet()
{
	//testBeamletConstructor();
	testBeamletSetters();
}

void
testBeamletConstructor()
{
	std::cout << "Beamlet class, constructor test has begun!\n";

	Beamlet *b0 = new Beamlet();

	std::cout << (*b0) << std::endl;

	int coor1[] = {1,5,1}, coor2[] = {2,2,2};
	std::vector<int> coordinates1(coor1, coor1 + sizeof(coor1) / sizeof(int)),
					 coordinates2(coor2, coor2 + sizeof(coor2) / sizeof(int));

	Point* p1 = new Point(coordinates1);
	Point* p2 = new Point(coordinates2);

	Beamlet *b1 = new Beamlet(p1,p2);

	std::cout << (*b1) << std::endl;

	std::cout << "Beamlet class, constructor test has ended!" << std::endl;
}

void
testBeamletSetters()
{
	std::cout << "Beamlet class, constructor test has begun!" << std::endl;

	int coor1[] = {1,0,0}, coor2[] = {0,1,0}, coor3[] = {0,0,1};

	std::vector<int> coordinates1(coor1, coor1 + sizeof(coor1) / sizeof(int)),
					 coordinates2(coor2, coor2 + sizeof(coor2) / sizeof(int)),
					 coordinates3(coor3, coor3 + sizeof(coor3) / sizeof(int));

	Point *p1, *p2, *p3;

	p1 = new Point(coordinates1);
	p2 = new Point(coordinates2);
	p3 = new Point(coordinates3);

	Beamlet beamlet(p1,p2);

	std::cout << beamlet << std::endl;

	beamlet.SetPoint1(p2);
	beamlet.SetPoint2(p3);

	std::cout << beamlet << std::endl;


	std::cout << "Beamlet class, constructor test has ended!" << std::endl;
}
