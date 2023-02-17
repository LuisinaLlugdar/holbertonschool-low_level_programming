#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: variable.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
int lastdigit;
lastdigit = n % 10;
if (n < 0)
{
lastdigit = -n % 10;
}
_putchar('0' + lastdigit);
return (lastdigit);
}
