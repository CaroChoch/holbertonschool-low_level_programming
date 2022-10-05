#include "main.h"
#include <stdio.h>

/**
* print_numbers - print the numbers, from 0 to 9, followed by a new line
* using prototype.
*/

void print_numbers(void)
{
int number;

for (number = '0'; number <= '9'; number++)
_putchar(number);

_putchar('\n');
}
