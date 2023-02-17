#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: 1 if lowercase, 0 otherwise.
 *
 * @c: variable
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
	_putchar('1');
	return (1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
