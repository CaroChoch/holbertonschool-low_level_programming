#include "main.h"


/**
 * get_bit - returns the value of a bit
 * at a given index.
 * @n: number to check the value of
 * @index: the index to look for the
 * number.
 * Return: the value of the bit at
 * index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	return (bit);
}

