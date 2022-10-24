#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated
 * space in memory, or NULL if error.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len;
	int i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; *(s1 + i); ++i)
	len = i;

	for (i = 0; *(s2 + i); ++i)
	len = len + i;

	str = malloc(sizeof(char) * (len + 1));

	if (str == 0)
		return (NULL);

	for (i = 0; *s1; ++i)
		*(str + i) = *(s1++);

	for (; i <= len; ++i)
		*(str + i) = *(s2++);

	return (str);
}

