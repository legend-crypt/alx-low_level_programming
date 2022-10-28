#include "main.h"
/**
  * get_bit - get the bit at a certain position
  * @n: the int value
  * @index: the position we are getting the bit
  * Return: the bit
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	unsigned int result;


	mask = 1 << index;
	result = n & mask;
	if (result > 0)
	{
		return (1);
	}
	else
		return (0);
}
