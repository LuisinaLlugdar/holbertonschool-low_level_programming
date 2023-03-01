#include "main.h"
/**
 * _strncpy- copies a string
 *
 * Return: pointer to dest
 *
 * @dest: variable
 *
 * @src: variable
 *
 * @n: variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (b <= n)
	{
		dest[b] = src[b];
		b++;
	}
	if (b == a + 1)
	{
		dest[b] = '\0';
	}
	return (dest);
}
