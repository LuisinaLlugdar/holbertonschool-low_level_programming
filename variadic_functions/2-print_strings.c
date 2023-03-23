#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list liststring;
	char *string;

	va_start(liststring, n);
	for (i = 1; i <= n; i++)
	{
		string = va_arg(liststring, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	va_end(liststring);
	printf("\n");
}
