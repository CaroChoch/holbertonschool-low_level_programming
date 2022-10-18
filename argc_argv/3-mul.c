#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers.
 *
 * @argv: array containing command line
 * arguments.
 * @argc: number of command line
 * arguments.
 *
 * Return: 1 if error, 0 if funtion run
 * correctly.
 */

int main(int argc, char *argv[])
{
	int i;

	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		for (i = 1; i < argc; i++)
	{
		result = result * strtol(argv[i], NULL, 10);
	}
	printf("%d\n", result);

	return (0);
}

