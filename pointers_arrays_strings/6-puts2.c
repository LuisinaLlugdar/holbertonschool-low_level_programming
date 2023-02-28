#include "main.h"

/**
 * puts2 - prints even positions
 *
 * @str: string
 */

void puts2(char *str)
{
	int x = 0, y = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	for (; y < x; y = y + 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
