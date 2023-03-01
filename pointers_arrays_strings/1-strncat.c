#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * Return: resultating string dest
 *
 * @dest: varible
 *
 * @src: varible
 *
 * @n: variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	if (b >= n)
	{
		dest[a] = '\0';
	}
	return (dest);
}
