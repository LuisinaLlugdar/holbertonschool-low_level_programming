#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: variable
 */
void print_square(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int a, b;
for (b = 0; b <= size - 1; b++)
{
for (a = 0; a <= size - 1; a++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
