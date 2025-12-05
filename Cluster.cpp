/*
 * Cluster.cpp
 *
 *  Created on: Jun 12, 2010
 *      Author: Kocher
 */

#include <cmath>

#include "Cluster.h"
#include "utilities/PrintContent.h"

Cluster::Cluster(): type(), scale(-1), baseCoordinates(), pointList(),
					parentDyadicObject(), pairClusterList(), pairClustersComputed(false)
{
	// TODO Auto-generated constructor stub
}

Cluster::Cluster(std::string type, int scale, const std::vector<int> & baseCoordinates): type(), scale(-1), baseCoordinates(),
							  pointList(), parentDyadicObject(), pairClusterList(), pairClustersComputed(false)
{
	this->type = type;


	this->scale = scale;

	this->baseCoordinates = baseCoordinates;

	this->parentDyadicObject = parentDyadicObject;

	// creation of pointList vector
	//std::string type("X110X0X1");

	std::cout << "--------------" << std::endl;
	std::cout << "type : " << type << std::endl;

	// finding the dimension of the cluster, that is the # of 'X' in the type string
	size_t found;
	int fctDim;

	found = this->type.find("X");
	std::vector<int> fctIndex;

	while (found!=std::string::npos)
	{
		fctIndex.push_back(found);
		found = type.find("X", found+1);
	}

	//std::cout << index << std::endl;

	fctDim = fctIndex.size();
	std::cout << "fctIndex : " << fctIndex << std::endl;

	if (fctDim > 0) // dimension of the cluster is greater than zero, that is, it is a line, face, or cube etc.
	{

		int numberPoints = pow(2, scale)-1, totalNumberPoints = pow(numberPoints, fctDim);  // # of points in one dimension

		this->pointList.reserve(totalNumberPoints);

		for (int k = 0; k < totalNumberPoints; ++k)
			this->pointList.push_back(NULL);

		///
		//int startArray[] = {1, 1, 1}, goalArray[] = {4, 4, 1} ;

		//std::vector<int> start(startArray, startArray + sizeof(startArray)/(sizeof(int))),
		//				 goal(goalArray, goalArray + sizeof(goalArray)/(sizeof(int)));;



		int n = baseCoordinates.size();

		std::vector<int> start = baseCoordinates, goal = baseCoordinates;

		for (int k = 0; k < fctDim ; ++k)
			goal[ fctIndex[k] ] = goal[ fctIndex[k] ] + numberPoints - 1;

		std::vector<int> state = start;
		int i = n-1, oneDimIndex;
		//int *nDimIndex = new int[fctDim];
		std::vector<int> nDimIndex(fctDim, 0);

		Point *point;

		std::cout << "start : " << start << " - goal : " << goal << std::endl;

		while (state[0] <= goal[0])
		{

			std::cout << state << std::endl;
			oneDimIndex = 0;
			for (int k = 0; k < fctDim; ++k)
			{
				nDimIndex[k] = state[ fctIndex[k] ] - start[ fctIndex[k] ];
				oneDimIndex = oneDimIndex + nDimIndex[k]*pow(numberPoints, fctDim - 1 - k);
			}

			point = new Point(state,this);
			this->pointList[oneDimIndex] = point;

			std::cout << "oneDimIndex : " << oneDimIndex << "  nDimIndex : " << nDimIndex << std::endl;
			std::cout << (*point) << std::endl;

			state[i] = state[i] + 1;

			while(state[i] > goal[i])
			{
				if (i == 0)
					break;

				state[i] = start[i];
				i = i - 1;
				state[i] = state[i] + 1;
			}

			i = n-1;
		}
	}
	else // the dimension of the cluster is zero, that is, it consists of just a single vertex point
	{
		Point *point = new Point(baseCoordinates, this);
		std::cout << "base Coordinates : " << baseCoordinates << std::endl;
		this->pointList.push_back(point);

		std::cout << (*point) << std::endl;
	}
	///


}

void
Cluster::AddPoint(Point *point)
{
	//TODO: Rewrite this function , implement it with push_back() function

	const std::vector<int> &coordinates = point->GetCoordinates();

	// finding the dimension of the cluster, that is the # of 'X' in the type string
	size_t found;
	int fctDim;

	found = this->type.find("X");
	std::vector<int> fctIndex;

	while (found!=std::string::npos)
	{
		fctIndex.push_back(found);
		found = type.find("X", found+1);
	}

	//std::cout << index << std::endl;

	fctDim = fctIndex.size();

	if(fctDim > 0)
	{
		int numberPoints = pow(2, scale)-1;  // # of points in one dimension
		int oneDimIndex = 0;
		std::vector<int> nDimIndex(fctDim, 0);
		for (int k = 0; k < fctDim; ++k)
		{
			nDimIndex[k] = coordinates[ fctIndex[k] ] - this->baseCoordinates[ fctIndex[k] ];
			oneDimIndex = oneDimIndex + nDimIndex[k]*pow(numberPoints, fctDim - 1 - k);
		}

		this->pointList[oneDimIndex] = point;
	}
	else
	{
		this->pointList[0] = point;
	}


}

Point*
Cluster::GetPoint(const std::vector<int> & coordinates)
{
	// finding the dimension of the cluster, that is the # of 'X' in the type string
	size_t found;
	int fctDim;

	found = this->type.find("X");
	std::vector<int> fctIndex;

	while (found!=std::string::npos)
	{
		fctIndex.push_back(found);
		found = type.find("X", found+1);
	}

	//std::cout << index << std::endl;

	fctDim = fctIndex.size();

	if(fctDim > 0)
	{
		int numberPoints = pow(2, scale)-1;  // # of points in one dimension
		int oneDimIndex = 0;
		std::vector<int> nDimIndex(fctDim, 0);
		for (int k = 0; k < fctDim; ++k)
		{
			nDimIndex[k] = coordinates[ fctIndex[k] ] - this->baseCoordinates[ fctIndex[k] ];
			oneDimIndex = oneDimIndex + nDimIndex[k]*pow(numberPoints, fctDim - 1 - k);
		}

		return this->pointList[oneDimIndex];
	}
	else
	{
		return this->pointList[0];
	}
}



std::ostream&
operator<<(std::ostream & output, const Cluster & cluster)
{

	output << "Type : " << cluster.type
		   << " Scale : "<< cluster.scale
		   << " BaseCoordinates : " << cluster.baseCoordinates
		   << " PointList : " << cluster.pointList
		   << " pcComputed : " << cluster.pairClustersComputed;

	return output;
}


Cluster::~Cluster() {
	// TODO Auto-generated destructor stub
}
