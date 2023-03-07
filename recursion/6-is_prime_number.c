#include "main.h"
/**
 * prime - checks if n is prime
 * @n: number
 * @a: variable
 * Return: 1 or 0
 */
int prime(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % a == 0 &&  a > 1)
	{
		return (0);
	}
	else if ((n / a) < a)
	{
		return (1);
	}
	return (prime(n, a + 1));
}

#include "main.h"
/**
* is_prime_number - returns 1 if n is prime, 0 otherwise
* @n: variable
* Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	return (prime(n, 1));
}
