#include "main.h"

/**
 * jack_bauer - prints 00:00 to 23:59
 *
 * @a: int
 *
 * @b: int
 *
 * @c: int
 *
 * @d: int
 */
void jack_bauer(void)
{
int a = 0, b = 0, c = 0, d = 0;
for (; a < 3; a++)
{
_putchar(a);
}
for (; b < 4; b++)
{
_putchar(b);
_putchar(':');
}
for (; c < 6; c++)
{
_putchar(c);
for (; d <= 9; d++)
{
_putchar(d);
}
}
}
