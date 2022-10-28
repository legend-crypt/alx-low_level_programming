#include "main.h"

/**
  * clear_bit - set a given bit
  * @n: the interger number to be set
  * @index: the index to be set
  * Return: 1 on success and -1 on error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;
	unsigned int result;

	if (index > 63)
		return (-1);
	if(!*n)
		return (0);
	mask = 1 << index;
	result = mask ^ *n;
	*n = result;
	return (1);
}
