#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: variable
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a, b;
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (b == 1)
_putchar('\\');
if (b > 1)
_putchar(' ');
}
_putchar('\n');
}
}
}
