#include "main.h"
#include <stdio.h>

/**
 * divisible - check if a number is
 * divisible.
 *
 * @num: number to be checked.
 * @div: divisor.
 *
 * Return: 0 if number is divisible,
 * 1 if the number is not divisible.
 */

int divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number
 * is prime.
 *
 * @n: number to be checked.
 *
 * Return: 0 if integer isn't prime.
 * 1 if integer is prime.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n > 2 && n <= 3)
		return (1);
	return (divisible(n, div));
}

