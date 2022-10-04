#include "main.h"

/**
* prototype: _isalpha - checks if a character is lowercase
* or uppercase.
* @c: the character we have to check.
*
* Return: 1 if character is lowercase and 0 otherwise.
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
