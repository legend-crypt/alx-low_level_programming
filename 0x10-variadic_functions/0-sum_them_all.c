#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - take infinite args
 * @n: the number of args to be passed in
 * Return: summation
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argz;
	va_start(argz, n);

	for(i = 0; i < n; i++)
	{
		sum += va_arg(argz, int unsigned);
	}
	va_end(argz);
	return (sum);
}
