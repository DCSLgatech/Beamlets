/*
 * Cluster.h
 *
 *  Created on: Jun 12, 2010
 *      Author: Kocher
 */

#ifndef CLUSTER_H_
#define CLUSTER_H_

#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "Point.h"
#include "DyadicObject.h"

class Point;

class Cluster {
private:
	std::string type;
	int scale;
	std::vector<int> baseCoordinates;
	std::vector<Point*> pointList;

	DyadicObject *parentDyadicObject;
	std::list<Cluster *> pairClusterList;
	bool pairClustersComputed;

public:
	Cluster();
	Cluster(std::string type, int scale, const std::vector<int> & baseCoordinates);

	Cluster(std::string type, int scale, const std::vector<int> & baseCoordinates,
										 DyadicObject *parentDyadicObjet);
	void
	AddPoint(Point *point);

	Point*
	GetPoint(const std::vector<int> & coordinates);

	friend std::ostream& operator<<(std::ostream& output, const Cluster& cluster);

	~Cluster();
};

#endif /* CLUSTER_H_ */
