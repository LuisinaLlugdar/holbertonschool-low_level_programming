#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an int
 * @array: array to be checked
 * @size: size of the array
 * @cmp: function that compares values
 * Return: -1 if no match or if size <= 0, index otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		cmp(array[a]);
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
