#include "main.h"

/**
 * print_binary - function that prints
 * the binary representation of a numbr
 *
 * @n: decimal number to convert in
 * binary.
 * Return: binary number of a decimal
 * number.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');

	else
		_putchar('0');
}








