#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: variable
 */
void print_chessboard(char (*a)[8])
{
	int f, c;

	f = 0;
	while (f < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[f][c]);
			c++;
		}
		_putchar('\n');
		f++;
	}
}
