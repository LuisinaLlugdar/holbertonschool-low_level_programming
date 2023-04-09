#include "main.h"
/**
 * binary_to_uint - converts a binaty number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number, or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int x = 0, length = 0;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
		length++;
	length = length - 1;

	while (b[x] != '\0')
	{
		if ((b[x] != '0') && (b[x] != '1'))
			return (0);

		if (b[x] == '1')
			sum = sum + (1 * (1 << length));
		x++;
		length--;
	}
	return (sum);
}
