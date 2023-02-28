#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: variable
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a >= 1)
	{
		a--;
		_putchar(s[a]);
	}
	_putchar('\n');
}
