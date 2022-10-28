#include "main.h"
/**
 * set_bit - set the bit at a given position
 * @n: the num to be set
 * @index: the position to set the bit
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;
	unsigned int result;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	result = mask | *n;
	*n = result;
		return (1);

}

