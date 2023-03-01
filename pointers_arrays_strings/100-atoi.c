#include "main.h"
/**
 * _atoi - convert a string to an integer
 *
 * Return: int
 *
 * @s: varible
 */
int _atoi(char *s)
{
	int a = 0;

	while (*s >= '0' && *s <= '9')
	{
		a = (a * 10) + (*s - '0');
		a++;
	}
	return (a);
}
