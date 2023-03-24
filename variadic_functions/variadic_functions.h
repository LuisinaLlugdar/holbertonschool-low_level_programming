#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printc(va_list list);
void printi(va_list list);
void printfl(va_list list);
void prints(va_list list);

/**
 * struct type - struct
 * @dtype: char meaning the data type
 * @f: function
 */
typedef struct type
{
	char dtype;
	void (*f)(va_list);
} type_d;
#endif
