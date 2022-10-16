#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns
 * the factorial of a given number.
 *
 * @n: number to find the factorial of.
 *
 * Return: if n > 0 ,the factorial of n
 * if n < 0 , -1 (indicates an error).
 */

int factorial(int n)
{

        if (n < 0)
                return (-1);

        else if (n >= 0 && n <= 1)
                return (1);

        else
        {
                n *= factorial(n - 1);
                return (n);
        }

}

