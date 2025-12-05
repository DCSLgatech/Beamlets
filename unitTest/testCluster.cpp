/*
 * testCluster.cpp
 *
 *  Created on: Jun 14, 2010
 *      Author: oarslan3
 */

#include "Cluster.h"


void
testClusterConstructor();

void
testAddPoints();

void
testGetPoint();

void
testCluster()
{
	testClusterConstructor();

	//testAddPoints();

	//testGetPoint();
}

void
testClusterConstructor()
{
	Cluster *cl = new Cluster();

	std::string type;
	int scale;

		// start of testing 2D environments
	std::vector<int> baseCoor;

	scale = 1;

	baseCoor.push_back(0);
	baseCoor.push_back(0);
	type = "00";
	cl = new Cluster(type, scale, baseCoor);

	std::cout << (*cl) << std::endl;

	baseCoor[0] = 0;
	baseCoor[1] = 2;
	type = "01";
	cl = new Cluster(type, scale, baseCoor);

	baseCoor[0] = 0;
	baseCoor[1] = 1;
	type = "0X";
	cl = new Cluster(type, scale, baseCoor);

	scale = 2;

	baseCoor[0] = 4;
	baseCoor[1] = 0;
	type = "10";
	cl = new Cluster(type, scale, baseCoor);

	baseCoor[0] = 4;
	baseCoor[1] = 4;
	type = "11";
	cl = new Cluster(type, scale, baseCoor);

	baseCoor[0] = 4;
	baseCoor[1] = 1;
	type = "1X";
	cl = new Cluster(type, scale, baseCoor);

	scale = 3;
	baseCoor[0] = 1;
	baseCoor[1] = 0;
	type = "X0";
	cl = new Cluster(type, scale, baseCoor);

	baseCoor[0] = 1;
	baseCoor[1] = 8;
	type = "X1";
	cl = new Cluster(type, scale, baseCoor);

	// end of testing 2D environments

	scale = 3;

	type = "000";
	baseCoor[0] = 0;
	baseCoor[1] = 16;
	baseCoor.push_back(8);
	cl = new Cluster(type, scale, baseCoor);

	type = "001";
	baseCoor[0] = 0;
	baseCoor[1] = 16;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	type = "00X";
	baseCoor[0] = 0;
	baseCoor[1] = 16;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	type = "010";
	baseCoor[0] = 0;
	baseCoor[1] = 24;
	baseCoor[2] = 8;
	cl = new Cluster(type, scale, baseCoor);

	type = "011";
	baseCoor[0] = 0;
	baseCoor[1] = 24;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	type = "01X";
	baseCoor[0] = 0;
	baseCoor[1] = 24;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	type = "0X0";
	baseCoor[0] = 0;
	baseCoor[1] = 17;
	baseCoor[2] = 8;
	cl = new Cluster(type, scale, baseCoor);

	type = "0X1";
	baseCoor[0] = 0;
	baseCoor[1] = 17;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	type = "0XX";
	baseCoor[0] = 0;
	baseCoor[1] = 17;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	std::cout << (*cl) << std::endl;

	type = "100";
	baseCoor[0] = 8;
	baseCoor[1] = 16;
	baseCoor[2] = 8;
	cl = new Cluster(type, scale, baseCoor);

	type = "101";
	baseCoor[0] = 8;
	baseCoor[1] = 16;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	type = "10X";
	baseCoor[0] = 8;
	baseCoor[1] = 16;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	type = "110";
	baseCoor[0] = 8;
	baseCoor[1] = 24;
	baseCoor[2] = 8;
	cl = new Cluster(type, scale, baseCoor);

	type = "111";
	baseCoor[0] = 8;
	baseCoor[1] = 24;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	type = "11X";
	baseCoor[0] = 8;
	baseCoor[1] = 24;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	type = "1X0";
	baseCoor[0] = 8;
	baseCoor[1] = 17;
	baseCoor[2] = 8;
	cl = new Cluster(type, scale, baseCoor);

	type = "1X1";
	baseCoor[0] = 8;
	baseCoor[1] = 17;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	type = "1XX";
	baseCoor[0] = 8;
	baseCoor[1] = 17;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	type = "X00";
	baseCoor[0] = 1;
	baseCoor[1] = 16;
	baseCoor[2] = 8;
	cl = new Cluster(type, scale, baseCoor);

	type = "X01";
	baseCoor[0] = 1;
	baseCoor[1] = 16;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	type = "X0X";
	baseCoor[0] = 1;
	baseCoor[1] = 16;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	type = "X10";
	baseCoor[0] = 1;
	baseCoor[1] = 24;
	baseCoor[2] = 8;
	cl = new Cluster(type, scale, baseCoor);

	type = "X11";
	baseCoor[0] = 1;
	baseCoor[1] = 24;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	type = "X1X";
	baseCoor[0] = 1;
	baseCoor[1] = 24;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	type = "XX0";
	baseCoor[0] = 1;
	baseCoor[1] = 17;
	baseCoor[2] = 8;
	cl = new Cluster(type, scale, baseCoor);

	type = "XX1";
	baseCoor[0] = 1;
	baseCoor[1] = 17;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

}

void
testAddPoints()
{
	// will be written later
}


void
testGetPoint()
{
	Cluster *cl = new Cluster();

	std::string type;
	int scale;
	Point *point;

		// start of testing 2D environments
	std::vector<int> baseCoor, coor;

	scale = 1;

	baseCoor.push_back(0);
	baseCoor.push_back(1);
	type = "0X";
	cl = new Cluster(type, scale, baseCoor);

	coor.push_back(0);
	coor.push_back(1);
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	scale = 2;

	baseCoor[0] = 4;
	baseCoor[1] = 0;
	type = "10";
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 4;
	coor[1] = 0;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	baseCoor[0] = 4;
	baseCoor[1] = 4;
	type = "11";
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 4;
	coor[1] = 4;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	baseCoor[0] = 4;
	baseCoor[1] = 1;
	type = "1X";
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 4;
	coor[1] = 2;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	coor[0] = 4;
	coor[1] = 3;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	scale = 3;
	baseCoor[0] = 1;
	baseCoor[1] = 0;
	type = "X0";
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 2;
	coor[1] = 0;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	coor[0] = 4;
	coor[1] = 0;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	coor[0] = 7;
	coor[1] = 0;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	baseCoor[0] = 1;
	baseCoor[1] = 8;
	type = "X1";
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 1;
	coor[1] = 8;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	coor[0] = 4;
	coor[1] = 8;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	coor[0] = 5;
	coor[1] = 8;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	// end of testing 2D environments

	scale = 3;


	type = "011";
	baseCoor[0] = 0;
	baseCoor[1] = 24;
	baseCoor.push_back(16);
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 0;
	coor[1] = 24;
	coor.push_back(16);
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;


	type = "10X";
	baseCoor[0] = 8;
	baseCoor[1] = 16;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 8;
	coor[1] = 16;
	coor[2] = 12;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	coor[0] = 8;
	coor[1] = 16;
	coor[2] = 15;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	type = "1X1";
	baseCoor[0] = 8;
	baseCoor[1] = 17;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 8;
	coor[1] = 17;
	coor[2] = 16;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	type = "X0X";
	baseCoor[0] = 1;
	baseCoor[1] = 16;
	baseCoor[2] = 9;
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 7;
	coor[1] = 16;
	coor[2] = 12;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	coor[0] = 4;
	coor[1] = 16;
	coor[2] = 13;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	type = "XX1";
	baseCoor[0] = 1;
	baseCoor[1] = 17;
	baseCoor[2] = 16;
	cl = new Cluster(type, scale, baseCoor);

	coor[0] = 3;
	coor[1] = 20;
	coor[2] = 16;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;

	coor[0] = 5;
	coor[1] = 21;
	coor[2] = 16;
	point = cl->GetPoint(coor);
	std::cout << (*point) << std::endl;
}

