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
	int a, r;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] == s2[a])
		{
			r = 0;
		}
		else if (s1[a] < s2[a])
		{
			r = -13;
		}
		else
		{
			r = 13;
		}
		a++;
	}
	return (r);
}
