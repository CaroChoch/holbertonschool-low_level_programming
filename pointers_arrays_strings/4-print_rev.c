#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: string to print.
 * Reurn : void.
 */

  void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
