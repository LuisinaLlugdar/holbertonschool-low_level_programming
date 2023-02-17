#include "main.h"

/**
* print_sign - prints the sign of a number
*
* Return: 1 if positive, 0 if zero and -1 if negative.
*
*@n: variable.
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar(0);
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
