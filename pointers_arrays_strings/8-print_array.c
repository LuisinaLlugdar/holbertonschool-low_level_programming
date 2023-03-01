#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: variable
 *
 * @n: variable
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d, ", a[m]);
	}
	if (m == n)
	{
		printf("%d\n", a[m]);
	}
}
