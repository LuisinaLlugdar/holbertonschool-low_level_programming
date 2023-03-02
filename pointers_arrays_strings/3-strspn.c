#include "main.h"
/**
 * _strspn - gets the length of a substring
 * @s: substring
 * @accept: string
 * Return: number of coincidences
 */
unsigned int _strspn(char *s, char *accept)
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
			}
			else
			{
				return (c);
			}
			b++;
		}
		a++;
	}
	return (c);
}
