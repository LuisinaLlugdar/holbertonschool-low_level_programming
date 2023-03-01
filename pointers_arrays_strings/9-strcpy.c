#include "main.h"
/**
 * _strcpy- copies a string
 *
 * Return: pointer to dest
 *
 * @dest: variable
 *
 * @src: variable
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		dest[b] = src[b];
	}
	if (b == a + 1)
	{
		dest[b] = '\0';
	}
	return (dest);
}
