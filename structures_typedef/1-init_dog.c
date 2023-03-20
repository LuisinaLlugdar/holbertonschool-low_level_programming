#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: variable
 * @age: variable
 * @owner: variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
