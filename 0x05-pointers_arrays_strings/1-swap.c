#include "main.h"

/**
 * swap_int - the values of the int
 * @a: the parameter to swapped with b
 * @b: the parameter to swapped with a
 */
void swap_int(int *a, int *b)
{
	int aa;
	int bb;

	aa = *a;
	bb = *b;

	*a = bb;
	*b = aa;

}
