#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * Description: prints other characters of a string.
 * @str: input string to print.
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;
	{
		for (; j < i; j += 2)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}

