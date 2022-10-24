#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that
 * allocated memory using malloc.
 *
 * @b: size of memory allocated.
 *
 * Return: pointer to the allocated
 * memory.
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}

