#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string
 * given
 *
 * @str: string ti be duplicated.
 *
 * Return: pointer to the duplicated
 * string, or NULL if str == NULL or
 * insufficient memory is available.
 */

char *_strdup(char *str)
{
	char *str_duplicate;
	int index = 0, len = 0;

	if (str == NULL)
		return (NULL);

	for (; str[index]; index++)
		len++;

	str_duplicate = malloc(sizeof(char) * index);

	if (str_duplicate ==  NULL)
		return (NULL);


	for (; len < index; len++)
		str_duplicate[len] = str[len];

	str_duplicate[len] = '\0';

	return (str_duplicate);
}

