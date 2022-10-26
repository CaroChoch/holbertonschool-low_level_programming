#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates
 * memory for an array
 *
 * @nmemb: number of element of array
 * @size: number of bytes
 *
 * Return: NULL if nmenb = 0 / size = 0
 * NULL if _calloc fails
 * else pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int index;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		p[index] = 0;

	return (p);
}

