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
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	for (index = 0; s2[index]; index++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++);
	str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++);
	str[concat_index++] = s2[index];

	str[index + concat_index + 1] = '\0';

	return (str);

}


