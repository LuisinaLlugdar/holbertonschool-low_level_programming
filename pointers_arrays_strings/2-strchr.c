#include "main.h"

/**
 * _strchr - locates a char in a string
 * Return: pointer to first occurrence or null
 * @s: variable
 * @c: variable
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[a] != '\0' && s[a] != c)
	{
		a++;
	}
	if (c == s[a])
	{
		return (&s[a]);
	}
	else
	{
		return ('\0');
	}
}
