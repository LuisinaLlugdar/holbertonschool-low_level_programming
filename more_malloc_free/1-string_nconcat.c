#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string, the one to be concatenated to s1
 * @n: n bytes of s2 to be concatenated
 * Return: pointer to resultant string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length, a, b, nu;
	char *aux;

	nu = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nu >= _strlen(s2))
		nu = _strlen(s2);

	length = _strlen(s1) + nu + 1;
	aux = malloc(sizeof(*aux) * length);
	if (aux == NULL)
		return (NULL);


	for (a = 0; a < _strlen(s1); a++)
	{
		aux[a] = s1[a];
	}
	for (b = 0; b < nu; b++)
	{
		aux[a + b] = s2[b];
	}
	aux[a + b] = '\0';
	return (aux);
}

/**
 * _strlen - returns the length of a string
 * Return: int
 * @s: variable
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
