#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: variable
 * @accept: variable
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b, c = 0;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c++;
				break;
			}
			b++;
		}
		a++;
	}
	return ((s + c));
}
