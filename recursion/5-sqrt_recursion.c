#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that
 * returns the natural square root of
 * a number.
 *
 * @n: number being evaluated.
 *
 * Return: square root.
 */


int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * find_sqrt - function that finds the
 * natural square root of the input
 * number.
 * @num: number to find the square root
 * @root : the root
 * Return: if number has a natural
 * square root, the square root
 * if the number doesn't have : -1.
 */


int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}

