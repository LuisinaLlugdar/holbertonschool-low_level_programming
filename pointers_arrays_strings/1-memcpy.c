#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	unsigned int j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
