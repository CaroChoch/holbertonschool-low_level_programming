#include "main.h"

/**
* prototype: _islower - checks if a character is lowercase.
* @c: the character we have to check
*
* Return: 1 if character is lowercase and 0 otherwise.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
