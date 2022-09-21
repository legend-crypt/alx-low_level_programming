#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverse array
 * @a: the array
 * @n: the length of the array
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;

	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i == 0)
			break;
		printf(", ");
		i--;
	}
	printf("\n");
}
