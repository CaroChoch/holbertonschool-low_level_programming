#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, j;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
		sum = sum + strtol(argv[i], NULL, 10);
	}
	printf("%d\n", sum);

	return (0);
}

