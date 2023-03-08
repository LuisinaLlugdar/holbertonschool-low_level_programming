#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * Return: 1 if letter, 0 otherwise.
 *
 * @c: variable
 */

int _isalpha(int c)

{
if (c >= 'a' && c <= 'z')
{
return (1);
}
if (c >= 'A' && c <= 'Z')
return (1);
else
{
return (0);
}
}
