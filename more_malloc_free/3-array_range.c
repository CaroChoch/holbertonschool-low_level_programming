#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates
 * an array of integers.
 *
 * @min: min value of the array
 * @max: max value of the array
 *
 * Return: pointer to the newly array.
 */

int *array_range(int min, int max)
{
	int *p;
	int index;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (index = 0; min <= max; index++, min++)
		p[index] = min;

	return (p);
}

