#include "main.h"
#include <stdio.h>

/**
* prototype: _isdigit - checks for a digit (0 through 0).
* @c: the character we have to check
*
* Return: 1 if character is a digit and 0 otherwise.
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
