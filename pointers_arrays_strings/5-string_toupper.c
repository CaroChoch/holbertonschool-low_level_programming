#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - function that
 * change all lowercase letters of a
 * string to uppercase.
 * @str: string to modify
 * Return: char
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32; /* 32 = 97 - 65 (ASCII) */
	}

	return (str);
}
