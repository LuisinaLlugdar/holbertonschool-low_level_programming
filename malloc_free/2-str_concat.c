#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string to be concatenated
 * Return: pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *aux;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	c = a + b;
	aux = malloc((sizeof(char) * c) + 1);
	if (aux == NULL)
		return (NULL);
	b = 0;
	d = 0;
	while (d < c)
	{
		if (d <= a)
			aux[d] = s1[d];
		if (d >= a)
		{
			aux[d] = s2[b];
			b++;
		}
		d++;
	}
	aux[d] = '\0';
	return (aux);
}
