#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of an array
 * @a: the array
 * @n: the number of element
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
