#include "main.h"


/**
 * clear_bit - function that sets the
 * value of a bit to 0 at a given index
 * @n: number to check the value of
 * @index: the index to look for the
 * number.
 * Return: the value of the bit at
 * index or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	if (index < sizeof(unsigned int) * 8)
		*n = ~(1 << index) & *n;
	return (1);
}


