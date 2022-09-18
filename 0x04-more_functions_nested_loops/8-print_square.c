#include "main.h"
/**
 * print_square - print square followed by new line
 * @size: the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 1;
		while (i <= size)
		{
			int j;

			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
