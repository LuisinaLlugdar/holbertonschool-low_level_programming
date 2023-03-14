#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	char *aux;
	int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	aux = malloc((sizeof(char) * a) + 1);
	if (aux == NULL)
	{
	return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		aux[b] = str[b];
	}
	aux[b] = '\0';
	return (aux);
}
