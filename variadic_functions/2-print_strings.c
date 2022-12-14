#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - function that prints
 * strings followed by a new line.
 *
 * @separator: string to be printed
 * between the strings.
 * @n: number of strings passed to the
 * function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *s;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(params, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(params);
}


