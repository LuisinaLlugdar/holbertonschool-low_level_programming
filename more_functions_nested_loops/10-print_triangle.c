#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: variable
 */
void print_triangle(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
if (a > 1)
{
for (b = 1; b <= size - a; b++)
{
_putchar(' ');
}
for (b = 1; b <= a - 1; b++)
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
