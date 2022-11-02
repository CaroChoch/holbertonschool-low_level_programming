#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - function that prints
 * numbers, followed by a new line.
 *
 * @separator: string to be printed
 * between numbers.
 * @n: number of integers passed to the
 * function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(params);

	printf("\n");
}

