#include "variadic_functions.h"
/**
 * print_all - function that prints everything
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int a, b;
	va_list list;

	type_d option[] = {
		{'c', printc},
		{'i', printi},
		{'f', printfl},
		{'s', prints},
		{'\0', NULL}
	};

	va_start(list, format);
	b = 0;
	while (format != NULL && format[b] != '\0')
	{
		a = 0;
		while (option[a].dtype != '\0')
		{
			if (option[a].dtype == format[b])
			{
				printf("%s", separator);
				option[a].f(list);
				separator = ", ";
			}
			a++;
		}
		b++;
	}
	va_end(list);
	printf("\n");
}

/**
* printc - function that prints char
* @list: va_list
*/
void printc(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
* printi - function that prints int
* @list: va_list
*/
void printi(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
* printfl - function that prints float
* @list: va_list
*/
void printfl(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
* prints - function that prints strings
* @list: va_list
*/
void prints(va_list list)
{
	char *string;

	string = va_arg(list, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
