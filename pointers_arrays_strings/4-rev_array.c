#include "main.h"

/**
 * reverse_array - reverse an array of integers
 *
 * @a: array
 *
 * @n: variable
 */
void reverse_array(int *a, int n)
{
	int o, p;

	for (o = 0; o < n / 2; o++)
	{
		p = a[o];
		a[o] = a[n - o - 1];
		a[n - o - 1] = p;
	}
}
