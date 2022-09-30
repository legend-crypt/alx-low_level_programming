#include "main.h"

/**
 * _sqrt_recursion - calculate square root
 * @n: the number to calculate the root from
 * Return: interger
 */

int _sqrt_recursion(int n)
{

	if (n >= 0)
	{
		return (_sqrt_recursion(n) - 2);
	}
	else
	{
		return (-1);
	}
}
