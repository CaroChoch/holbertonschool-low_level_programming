#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers.
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to the array or 
 * NULL if width or height <= 0 or NULL
 * if the function fais.
 */

int **alloc_grid(int width, int height)
{
	int index, **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < height; ++index)
	{
		*(array + index) = malloc(sizeof(int) * width);
		if (*(array + index) == NULL)
		{
			while (index >= 0)
			{
				free(*(array + index));
				--index;
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}

