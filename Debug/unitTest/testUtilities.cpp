/*
 * testUtilities.cpp
 *
 *  Created on: Jun 13, 2010
 *      Author: Kocher
 */
#include <iostream>
#include "utilities/utilities.h"

void
testToBase()
{
	char buffer[32];

	std::cout << "Binary with no fixed number of digits (1 to 15):\n";
	for (int i = 1; i <= 15; ++i)
	{
		toBase( i, buffer, 2 );
		std::cout << buffer << ' ';
	}

	std::cout << "\n\nBinary with 4 fixed digits (1 to 15):\n";
	for (int i = 1; i <= 15; ++i)
	{
		toBase( i, buffer, 2, 4 );
		std::cout << buffer << ' ';
	}


	std::cout << "\n\n\nOctal with no fixed number of digits (1 to 15):\n";
	for (int i = 1; i <= 15; ++i)
	{
		toBase( i, buffer, 8 );
		std::cout << buffer << ' ';
	}

	std::cout << "\n\nOctal with 3 fixed digits (1 to 15):\n";
	for (int i = 1; i <= 15; ++i)
	{
		toBase( i, buffer, 8, 3 );
		std::cout << buffer << ' ';
	}


	std::cout << "\n\n\nDecimal with no fixed number of digits (1 to 15):\n";
	for (int i = 1; i <= 15; ++i)
	{
		toBase( i, buffer, 10 );
		std::cout << buffer << ' ';
	}

	std::cout << "\n\nDecimal with 4 fixed digits (1 to 15):\n";
	for (int i = 1; i <= 15; ++i)
	{
		toBase( i, buffer, 10, 4 );
		std::cout << buffer << ' ';
	}

	std::cout << "\n\n\nHex with no fixed number of digits (1 to 15):\n";
	for (int i = 1; i <= 15; ++i)
	{
		toBase( i, buffer, 16 );
		std::cout << buffer << ' ';
	}

	std::cout << "\n\nHex with 2 fixed digits (1 to 15):\n";
	for (int i = 1; i <= 15; ++i)
	{
		toBase( i, buffer, 16, 2 );
		std::cout << buffer << ' ';
	}

}
