#include "main.h"
/**
 * print_line - print a straigt line
 * @n: the input to check
 */
void print_line(int n)
{
	int i;
	int ch;

	i = 0;

	ch = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar(ch);
			i++;
		}
	}
	_putchar('\n');
}
