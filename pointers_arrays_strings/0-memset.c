#include "main.h"
#include <stdio.h>

/**
 * *_memset - function that fills
 * memory with a constant byte.
 * @n: the first bytes of the memory
 * area.
 * @s: the function is pointed to by s.
 * @b: constant byte.
 * Return: pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

