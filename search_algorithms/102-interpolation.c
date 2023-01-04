#include "search_algos.h"

/**
 * interpolation_search -  function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located or iof value is not present
 * in array or if array is NULL, your function must return -1.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL || value == '\0')
		return (-1);

	for (; low <= high;)
	{
		pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	if (pos >= size)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
		return (pos);

	else if (array[pos] > value)
		high = pos - 1;

	else
		low =  pos + 1;

	}
	return (-1);
}

