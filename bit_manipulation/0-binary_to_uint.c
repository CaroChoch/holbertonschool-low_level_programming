#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function that
 * converts a binary number to an
 * unsigned int.
 *
 * @b: is pointing to a string of 0 and
 * 1 chars
 *
 * Return: the converted number or 0 if
 * b is NULL or 0 if there is one or
 * more chars in the string b that is
 * not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int index = 0, len = strlen(b);

	if (b == NULL)
		return (0);

	while(index < len)
	{
		if (b[index] == '0' || b[index] == '1')
		{
			val <<= 1;
			val += b[index] - '0';
			index++;
		}
		else
			return (0);
	}	

	return (val);
}

