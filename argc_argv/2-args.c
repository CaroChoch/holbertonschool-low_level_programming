#include <stdio.h>

/**
 * main - print the name of a program.
 *
 * @argv: array containing command line
 * of arguments.
 * @argc: number of command line
 * arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

