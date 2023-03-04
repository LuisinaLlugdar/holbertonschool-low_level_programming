#include "main.h"
/**
 * _atoi - convert a string to an integer
 *
 * Return: int
 *
 * @s: varible
 */
int _atoi(char *s)
{
	int sg = 1, r = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sg = -sg;
		}
		if (*s >= '0' && *s <= '9')
		{
			r = r * 10 + (*s - '0');
			while (*(s + 1) >= '0' && *(s + 1) <= '9')
			{
				s++;
				r = r * 10 + (*s - '0');
			}
			break;
			}
		s++;
		}
	return (sg * r);
}
