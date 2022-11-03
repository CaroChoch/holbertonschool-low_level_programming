#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * print_char - Prints a char
 * @argp: Argument pointer
 */

void print_char(va_list argp)
{
	printf("%c", va_arg(argp, int));
}


/**
 * print_integer - Prints an integer
 *
 * @argp: Argument pointer
 */

void print_integer(va_list argp)
{
	printf("%d", va_arg(argp, int));
}


/**
 * print_float - Prints a float
 *
 * @argp: Argument pointer
 */

void print_float(va_list argp)
{
	printf("%f", va_arg(argp, double));
}


/**
 * print_string - Prints a string
 *
 * @argp: Argument pointer
 */

void print_string(va_list argp)
{
	char *s = va_arg(argp, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}


/**
 * print_all - function that prints
 * anything.
 *
 * @format: list of types of arguments
 * passed to the function.
 */

void print_all(const char * const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list argp;
	char *separator = "";
	int i = 0;
	int j = 0;

	va_start(argp, format);
	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(argp);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(argp);
}





