#include "main.h"
/**
 * print_diagsums - sum the diagonal of square matrix
 * @size: variable
 * @a: variable
 */
void print_diagsums(int *a, int size)
{
	int b, d1, d2;

	d1 = 0;
	d2 = 0;
	for (b = 0; b < size; b++)
	{
		d1 += *(a + b * size + b);
		d2 += *(a + b * size + (size - b - 1));
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
