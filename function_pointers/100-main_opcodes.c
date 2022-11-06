#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - function that prints the
 * opcodes of its own main function.
 *
 * @argc: number of arg
 * @argv: arguments vector,
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int bytes, index;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}


	for (index = 0; index < bytes; index++)
	{
		printf("%02hhx", ((char *)main)[index]);
		if (index < bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

