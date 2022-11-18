#include "main.h"

/**
 * flip_bits - Returns the number of
 * bits you would need to flip to get
 * from one number to another.
 *
 * @n: First number to compare
 * @m: Second number to compare
 * Return: the number of bits you would
 * need to flip to get.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int bits;

	result = n ^ m;
	for (bits = 0; result > 0;)
	{
		if ((result & 1) == 1)
			bits++;
		result = result >> 1;
	}

	return (bits);
}

