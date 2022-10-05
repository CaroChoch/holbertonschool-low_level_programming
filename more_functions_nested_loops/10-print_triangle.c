#include "main.h"

/**
* print_triangle - function that prints a triangle.
*
* @size: size of the triangle.
* x: horizontal side of the triangle.
* y: vertical side of the triangle.
*/

void print_triangle(int size)
{
int x, y;

if (size <= 0)
_putchar('\n');
for (y = 1; y <= size; y++)
{
for (x = 1; x <= size; x++)
{
if (x <= (size - y))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
