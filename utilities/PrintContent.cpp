/*
 * PrintContent.cpp
 *
 *  Created on: Jun 13, 2010
 *      Author: Kocher
 */
#include "PrintContent.h"




std::ostream&
operator<<(std::ostream& output, const std::vector<int> & data)
{
	std::vector<int>::const_iterator it = data.begin();

	if (!data.empty())
	{
		output << "[ ";

		for (it = data.begin(); it != data.end(); ++it)
			output << (*it) << " ";

		output << "]";
	}

	return output;
}

std::ostream&
operator<<(std::ostream& output, const std::list<Beamlet*> & beamletList)
{
	std::list<Beamlet*>::const_iterator it;


	if(!beamletList.empty())
	{
		it = beamletList.begin();
		output << "{ " << *(*it);

		for (++it; it != beamletList.end(); ++it)
		{
			output << " , " << *(*it);
		}

		output << " }";
	}

	return output;
}

std::ostream&
operator<<(std::ostream& output, const std::list<Point*> & pairPointList)
{
	std::list<Point*>::const_iterator it;
	std::vector<int> coor;

	if(!pairPointList.empty())
	{
		it = pairPointList.begin();

		coor = (*it)->GetCoordinates();

		output << "{ " << coor;

		for (++it; it != pairPointList.end(); ++it)
		{
			coor = (*it)->GetCoordinates();
			output << " , " << coor;
		}

		output << " }";
	}

	return output;
}


std::ostream&
operator<<(std::ostream& output, const std::vector<Point*> & pairPointList)
{
	std::vector<Point*>::const_iterator it;
	std::vector<int> coor;

	if(!pairPointList.empty())
	{
		it = pairPointList.begin();

		coor = (*it)->GetCoordinates();

		output << "{ " << coor;

		for (++it; it != pairPointList.end(); ++it)
		{
			coor = (*it)->GetCoordinates();
			output << " , " << coor;
		}

		output << " }";
	}

	return output;
}
