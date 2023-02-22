#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
int a;
for (a = '0'; a <= '8'; a++)
{
_putchar(a);
_putchar('\n');
}
if (a == '9')
{
_putchar(a);
}
}
