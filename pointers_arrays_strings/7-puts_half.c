#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: string input.
 * Return: void.
 */

void puts_half(char *str)
{
	int i, j;
	
	i = 0;

	for (; str[i] != '\0'; i++)
		j = i / 2;
	if (i % 2 == 1)
		j++;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

