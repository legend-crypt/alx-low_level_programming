#include "main.h"

/**
 * helper - finds a prime number
 * @i: the iterator
 * @n: the number to find the prime number from
 * Return: 1 or 0
 */

int helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
		return (0);
	return (helper(n, i - 1));
}

int helper(int n, int i);

/**
* is_prime_number - says if an integer is a prime number or not
* @n: number to evaluate
*
* Return: 1 if n is a prime number, 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (helper(n, n - 1));
}
