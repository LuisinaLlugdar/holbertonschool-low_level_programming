#include "main.h"

/**
 * _strchr - locates a char in a string
 * Return: pointer to first occurrence or null
 * @s: variable
 * @c: variable
 */
char *_strchr(char *s, char c)
{
	int a, b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (s[b] == c)
		{
			p = &s[b];
		}
		else
		{
			return ('\0');
		}
	}
	return (p);
}
