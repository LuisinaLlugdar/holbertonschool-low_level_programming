#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * Return: char
 *
 * @s: variable
 */
char *leet(char *s)
{
	int a, b;

	int c[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int d[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (b = 0; s[b] != '\0'; b++)
	{
		for (a = 0; c[a] != '\0'; a++)
		{
			if (s[b] == c[a])
			{
				s[b] = d[a];
			}
		}
	}
	return (s);
}
