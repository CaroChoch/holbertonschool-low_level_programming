#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * & initializes it with a specific char
 *
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL
 * if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index = 0;
	char *array = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (; index < size; index++)
		array[index] = c;

	return (array);
}

