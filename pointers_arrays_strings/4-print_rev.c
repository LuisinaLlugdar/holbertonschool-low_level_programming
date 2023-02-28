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
	a -= 1;
	while (a >= 0)
	{
		a--;
		_putchar(s[a]);
	}
	_putchar('\n');
}
