#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: variable
 * @accept: variable
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
