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
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	if (s[a] == c)
	{
		p = &s[a];
	}
	else
	{
		return ('\0');
	}
return (p);
}
