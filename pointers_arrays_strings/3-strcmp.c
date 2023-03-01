#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * Return: int
 *
 * @s1: variable
 *
 * @s2: varibale
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c, d = 0, r;

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	if (a == b)
	{
		for (c = 0; s2[c] != '\0'; c++)
		{
			if (s1[c] == s2[c])
			{
				d++;
			}
			if (d == c)
			{
				r = 0;
			}
			else if (d < c)
			{
				r = -1;
			}
			else
			{
				r = 1;
			}
		}
	}
	return (r);
}
