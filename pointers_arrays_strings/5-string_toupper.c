#include "main.h"
/**
 * string_toupper - Changes lowercase to uppercase
 *
 * Return: char
 *
 * @s: string
 */
char *string_toupper(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = (int)s[a] - 32;
		}
		a++;
	}
	return (s);
}
