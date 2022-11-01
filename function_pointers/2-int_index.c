#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"

/**
 * int_index - function that searches
 * for an integer.
 *
 * @array: array where to search int
 * @size: number of elements in the
 * array
 * @cmp: pointer to the function to be
 * used to compare values.
 *
 * Return: index of the first element
 * or -1 if no element matches or if
 * size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}

