#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - print the numbers, from 0 to 9, but don't
* print 22 and 4, followed by a new line.
* using prototype.
*/

void print_most_numbers(void)
{
int number;

for (number = '0'; number <= '9'; number++)
if (number != '2' && number != '4')
_putchar(number);

_putchar('\n');
}
