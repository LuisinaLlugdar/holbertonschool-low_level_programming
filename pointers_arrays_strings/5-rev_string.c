#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: variable
 */
void rev_string(char *s)
{
	int x, y, z;
	char *t, p;

	t = s;

	while (s[y] != '\0')
	{
		y++;
	}
	z = 1;

	while (z < y)
	{
		t++;
		z++;
	}
	for (x = 0; x < (y / 2); x++)
	{
		p = s[x];
		s[x] = *t;
		*t = p;
		t--;
	}
}
