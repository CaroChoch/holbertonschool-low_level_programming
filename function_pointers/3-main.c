#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations.
 *
 * @argc: argument count
 * @argv: string of arguments in array
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = op(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}


