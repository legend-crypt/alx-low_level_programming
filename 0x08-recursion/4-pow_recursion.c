#include "main.h"

/**
 * _pow_recursion - return power of a number
 * @x: the base number
 * @y: the exponent number
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion((x), y - 1));

	}
}

