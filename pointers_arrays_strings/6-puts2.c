#include "main.h"

/**
 * puts2 - prints even positions
 *
 * @str: string
 */

void puts2(char *str)
{
	int x = 0;

	for (; str[x] != '\0'; x = x + 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
