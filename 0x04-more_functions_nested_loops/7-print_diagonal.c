#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: the length of the line
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			int j = 0;

			while (j < i)
			{
				if (j > 0)
				{
				_putchar(' ');
				}
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
