/*
 * PrintContent.h
 *
 *  Created on: Jun 13, 2010
 *      Author: Kocher
 */

#ifndef PRINTCONTENT_H_
#define PRINTCONTENT_H_

#include <ostream>
#include <vector>
#include <list>

#include "../Beamlet.h"

std::ostream&
operator<<(std::ostream& output, const std::vector<int> & data);

std::ostream&
operator<<(std::ostream& output, const std::list<Beamlet*> & beamletList);

std::ostream&
operator<<(std::ostream& output, const std::list<Point*> & pairPointList);

std::ostream&
operator<<(std::ostream& output, const std::vector<Point*> & pairPointList);

#endif /* PRINTCONTENT_H_ */
