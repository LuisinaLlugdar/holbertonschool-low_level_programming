#include "main.h"

/**
 * _isdigit - checks for alphabetic character.
 *
 * Return: 1 if digit, 0 otherwise.
 *
 * @c: variable
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
