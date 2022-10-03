/*
 *file : 1-last_digit.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main : Print the last digit of the number stored in the variable n
 * it's grater than 5, it's less than 6, or zero
 *
 * Return : always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	  printf("Last digit of %d and is greater than 5\n", n);
	else if ((n < 6) && (n != 0))
	  printf("Last digit of %d and is less than 6 and not 0\n", n);
	else
	  (n = 0);
	    printf("Last digit of %d and is 0\n", n);


	return (0);
}
