#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array  - create array of chars
 * @size: the size of the array
 * @c: the characters
 * Return: char of arrays
 */

char *create_array(unsigned int size, char c)
{
	char *ar = (char *)malloc(size * sizeof(c));
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
	return (ar);

}
