#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if it isn't found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
