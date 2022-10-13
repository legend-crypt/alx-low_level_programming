#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - this function prints strings.
 * @separator: the separator
 * @n: the guard
 * Return: the print of the input
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *check;
	va_list argz;

	if (n > 0)
	{
		if (separator == NULL)
		{
			separator = "";
		}
		va_start(argz, n);
		for (i = 0; i < n; i++)
		{
			check = va_arg(argz, char *);
			if (check == NULL)
				check = "(nil)";
			printf("%s", check);
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(argz);
	printf("\n");
}
