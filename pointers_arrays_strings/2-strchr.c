#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates
 * a character in a string.
 *
 * @s: string
 * @c: character
 *
 * Return: first occurence of the
 * character c or NULL if the character
 * is not found.
 */


char *_strchr(char *s, char c)
{
	while (*s != (char) c)
	{
		if (!*s++)
		{ return NULL;
		}
	}
	return ((char *)s);
}

