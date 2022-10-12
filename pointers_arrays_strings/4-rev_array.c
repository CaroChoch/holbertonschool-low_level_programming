#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that
 * reverses the content of an array of
 * integers.
 * @a: array of integers.
 * @n: number of elements of the array.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;

	for (i = 0; i < n; i++)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
		n--;
	}
}
