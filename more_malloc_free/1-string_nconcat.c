#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that
 * concatenates two strings.
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes of s2 after s1.
 *
 * Return: pointer. NULL if function
 * fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
		;

	for (len2 = 0; *(s2 + len2) != '\0'; len2++)
		;

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == 0)
		return (NULL);

	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
		*(str + len1) = *(s1 + len1);

	for (len2 = 0; len2 < n; len2++)
	{
		*(str + len1) = *(s2 + len2);
			len1++;
	}


	*(str + len1) = '\0';

	return (str);
}

