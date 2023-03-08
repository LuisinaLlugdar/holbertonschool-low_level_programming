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
	while (src[a])
	{
		a++;
	}
	b = 0;

	while (b < n && src[b])
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
