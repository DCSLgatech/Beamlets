/*
 * utilities.cpp
 *
 *  Created on: Jun 13, 2010
 *      Author: Kocher
 */

#include <iostream>
#include <iomanip>

const char *valLookup = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void toBase(int value, char *target, int base, int fixedDigitCount = 0)
{
	int digitCount = 1;
	int temp = value;
	bool _signed = value < 0;

	// Find digit count
	while ( temp /= base )
		digitCount++;

	// Compare with fixeed number of digits, use highest
	int i = std::max( fixedDigitCount, digitCount ) + _signed;

	// Add sign
	if ( _signed )
		target[0] = '-';

	// Convert
	for (int off; i - _signed; i--)
	{
		off = (value % base);
		value /= base;
		target[i-1] = valLookup[off < 0 ? -off : off];
	}

	// Add null-ptr
	target[ std::max(fixedDigitCount, digitCount) + _signed ] = 0;
}


