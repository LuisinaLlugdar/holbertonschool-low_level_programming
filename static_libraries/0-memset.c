#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: string
 * @b: variable
 * @n: variable
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
