/*
 * utilities.h
 *
 *  Created on: Jun 13, 2010
 *      Author: Kocher
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_


void toBase(
   int value,		// Integer value to convert
   char *target,	// Pointer to a large enough buffer
   int base,		// Base (from 2 to 36)
   int fixedDigitCount = 0	// The minimum number of digits it must contain
);



#endif /* UTILITIES_H_ */
