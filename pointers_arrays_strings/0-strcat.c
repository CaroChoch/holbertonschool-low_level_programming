#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that
 * concatenates two strings.
 * @src: buffer pointer
 * @dest: string pointer
 * Description: concatenates 2 strings.
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];

	return (dest);
}

