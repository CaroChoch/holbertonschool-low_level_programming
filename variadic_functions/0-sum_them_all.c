#include "variadic_functions.h"

/**
 * sum_them_all - function that returns
 * the sum of all its parameters.
 *
 * @n: number of parameters
 *
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...);
{
	int sum = 0;
	va_list params;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(params, int);
	}
	va_end(params);
	return (sum);
}

