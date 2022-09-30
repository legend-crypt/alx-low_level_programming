#include "main.h"

/**
 * helper -  find the factors of a number
 * @n: the number to find the factor of
 * @i: iterator
 * Return: the factor
 */

int helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper(n, i + 1));
}

int helper(int n, int i);

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
