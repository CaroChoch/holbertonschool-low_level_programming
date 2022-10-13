#include "main.h"
#include <stdio.h>

/**
* _memcpy - function that copies
* memory area.
* @_memcpy: function that copies
* memory area.
* @dest: memory area destination.
* @src: memory area source.
* @n: number of bytes copied.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

