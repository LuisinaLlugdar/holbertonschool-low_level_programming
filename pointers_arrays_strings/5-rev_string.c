#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: variable
 */
void rev_string(char *s)
{
	int x, y = 0, z;
	char *t, p;

	t = s;

	while (s[y] != '\0')
	{
		y++;
	}
	for (z = 1; z < y; z++)
	{
		t++;
	}
	for (x = 0; x < (y / 2); x++)
	{
		p = s[x];
		s[x] = *t;
		*t = p;
		t--;
	}
}
