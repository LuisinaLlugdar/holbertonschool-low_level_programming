#include "main.h"
/**
 * _strspn - gets the length of a substring
 * @s: substring
 * @accept: string
 * Return: number of coincidences
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0, d;

	a = 0;
	while (s[a] != '\0')
	{
		d = 0;
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c++;
				d = 1;
			}
			b++;
		}
		if (d == 0)
		{
			break;
		}
		a++;
	}
	return (c);
}
