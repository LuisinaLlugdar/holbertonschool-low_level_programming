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
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != src [n]; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
