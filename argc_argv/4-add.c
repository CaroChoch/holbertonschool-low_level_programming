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

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

