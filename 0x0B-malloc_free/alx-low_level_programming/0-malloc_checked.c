#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: int multiplier amount of memory to allocated
 */

void *malloc_checked(unsigned int b)
{
	void *malloc(b);

	if (b == NULL)
	{
		exit (98);
	}	
}
