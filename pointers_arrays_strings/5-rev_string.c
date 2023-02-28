#include "main.h"
/**
 * rev_string - check the code
 *
 * @s: variable
 */
void rev_string(char *s)
{
	int a = 0;
	char t[1000];

	while (s[a] != '\0')
	{
		a++;
	}
	while (a >= 1)
	{
		int b = 0;

		for (; b == a; b++)
		{
		a--;
		s[a] = t[b];
		}
	}
}
