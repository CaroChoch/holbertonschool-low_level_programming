#include "main.h"
#include <stdio.h>

/**
 * *cap_string - function that
 * capitalizes all words of a string.
 * @str: the string to be capitalized.
 * Return: new string.
 */

char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 9 && str[i - 1] <= 10)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 32 && str[i - 1] <= 34)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 40 && str[i - 1] <= 41)
				str[i] = str[i] - 32;
			else if (str[i - 1] == 46)
				str[i] = str[i] - 32;
			else if (str[i - 1] == 59)
				str[i] = str[i] - 32;
			else if (str[i - 1] == 123 || str[i - 1] == 125)
				str[i] = str[i] - 32;
		}
	}

	return (str);
}

