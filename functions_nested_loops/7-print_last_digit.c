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
if (lastdigit < 0)
{
lastdigit = lastdigit * -1;
}
_putchar('0' + lastdigit);
return (lastdigit);
}
