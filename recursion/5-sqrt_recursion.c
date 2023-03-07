#include "main.h"
/**
* possible_sqr - find the sqr
* @n: variable
* @r: candidate to be root of n
* Return: sqr
*/
int possible_sqr(int n, int r)
{
	if (r * r > n)
	{
		return (-1);
	}
	else if (r * r == n)
	{
		return (r);
	}
	return (possible_sqr(n, r + 1));
}

/**
 *_sqrt_recursion - returns the natural square root
 * @n: variable
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (possible_sqr(n, 0));
}
