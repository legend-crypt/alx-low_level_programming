#include "main.h"
/**
 * print_line - print a straigt line
 * @n: the input to check
 */
void print_line(int n)
{
	int i;
	int ch;

	ch = '_';

	while (i <= n)
	{
		if (i > 0)
		{
			_putchar(ch);
		}
		i++;
	}
	_putchar('\n');
}
