#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dig
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *first_dog;

	first_dog = malloc(sizeof(dog_t));
	if (first_dog == NULL)
		return (NULL);

	first_dog->age = age;

	if (name == NULL)
		first_dog->name = NULL;
	else
	{
		first_dog->name = _strdup(name);
	}

	if (owner == NULL)
		first_dog->owner = NULL;
	else
	{
		first_dog->owner = _strdup(owner);
	}
	return (first_dog);
}

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
