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
	char *ar = malloc(size * sizeof(c));
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	while (i <= size)
	{
		ar[i] = c;
		i++;
	}
	if (ar == NULL)
	{
		return (NULL);

	}
	free(ar);
	return (ar);

}
