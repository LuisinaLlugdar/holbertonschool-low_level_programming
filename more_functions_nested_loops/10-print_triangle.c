#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: variable
 */
void print_triangle(int size)
{
int filas, hashtags, espacios;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (filas = 1; filas <= size; filas++)
{
for (espacios = size - filas; espacios >= 1; espacios--)
{
_putchar(' ');
}
for (hashtags = 1; hashtags <= filas; hashtags++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

