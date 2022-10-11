#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates any values from src to dest
 * @src: second string to copy from.
 * @dest: string to be overwritten.
 * @n: number of values to concatenate.
 * Description: concatenates n number
 * of values from src to end of dest.
 * Return: pointer to dest.
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i])
		i++;

	while (j < n && src[i] != '\0')
		dest[i++] = src [j++];

	dest[i] = '\0';

	return (dest);
}

