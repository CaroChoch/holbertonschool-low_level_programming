#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for
 *
 * Return: the i where value is located or -1 If value is not present
 * in array or if array is NULL.
*/


int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, middle = 0, right = size - 1, i;

	if (array == NULL)
		return (-1);

	if (value == '\0')
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[middle] < value)
			left = middle + 1;

		else if (array[middle] > value)
			right = middle - 1;

		else
			return (middle);
	}
	return (-1);
}
