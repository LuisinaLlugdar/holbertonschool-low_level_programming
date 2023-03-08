#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * Return: resulting string dest
 *
 * @dest: variable
 *
 * @src: variable
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
