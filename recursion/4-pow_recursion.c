#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that
 * returns the value of x raised to the
 * power of y.
 *
 * @x: number
 * @y: exponent/
 *
 * Return: if y < 0, return -1, else
 * return the value of x^y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (!y)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

