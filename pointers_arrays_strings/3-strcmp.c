#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares
 * the size of two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: negative if s1 < s2,
 * 0 if s1 = s2, or positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
	{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
