#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: array given
 * @size: size of array
 * @action: function given as parameter
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action == NULL || array == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
