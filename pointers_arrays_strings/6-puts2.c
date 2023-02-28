#include "main.h"

/**
 * puts2 - prints even positions
 *
 * @str: string
 */

void puts2(char *str)
{
	int x = 0;
	int y = (x % 2);

	while (str[x] != '\0')
	{
		x++;
	}
	if (y == 0)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
