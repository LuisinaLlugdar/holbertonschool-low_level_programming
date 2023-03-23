#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variable
 * Return: Sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list1;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(list1, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list1, int);
	va_end(list1);

	return (sum);
}
