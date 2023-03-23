#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list listnum;

	va_start(listnum, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(listnum, int));
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(listnum);
}
