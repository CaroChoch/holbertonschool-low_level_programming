#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size:  the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located or if value is not present
 * in array or if array is NULL, your function must return -1.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), index = 0, j;

	if (array == NULL || value == '\0')
		return (-1);

	index = j = 0;
	while (j < size && array[j] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		index = j;
		j += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index, j);

	for (j = index; j <= index + step; j++)
	{
		if (j < size)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);

			if (array[j] == value)
				return (j);

		}
	}
	return (-1);
}
