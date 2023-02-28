#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: variable
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		str++;
	}
	_puts(str);
}
