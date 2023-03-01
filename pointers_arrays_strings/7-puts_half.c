#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: variable
 */
void puts_half(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = (a / 2);
	}
	else
	{
		b = ((a - 1) / 2);
		b += 1;
	}
	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
