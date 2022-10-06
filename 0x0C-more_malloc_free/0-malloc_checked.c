#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the type to be calculate the size from
 * Return: pointer to allocated mem
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
