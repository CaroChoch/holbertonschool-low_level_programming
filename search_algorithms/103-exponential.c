#include "search_algos.h"

/**
 * _binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @left: the beginning index of the subarray to search.
 * @right: the ending index of the subarray to search.
 * @value: value to search for
 *
 * Return: the i where value is located or -1 If value is not present
 * in array or if array is NULL.
*/


int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	if (value == '\0')
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i < right)
				printf(", ");
		}
		printf("\n");

		i = (left + right) / 2;

		if (array[i] < value)
			left = i + 1;

		else if (array[i] > value)
			right = i - 1;

		else
			return (i);
	}
	return (-1);
}


/**
 * exponential_search - function that searches for a value in a sorted array of
 * integers using the Exponential search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located or if value is not present in
 * array or if array is NULL, your function must return -1.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || value == '\0')
		return (-1);

	if (size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (bound < size - 1)
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
				bound / 2, bound);
		return (_binary_search(array, bound / 2, bound, value));
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
				bound / 2, size - 1);
		return (_binary_search(array, bound / 2, size - 1,  value));
	}
}


